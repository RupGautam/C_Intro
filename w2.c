// Author:
// Rup Gautam <rupngautam@gmail.com>
//
// Copyright (c) 2016 RupGautam
//
//  I declare that the attached assig nment is wholly my own work in accordance with Seneca Academic Policy.
//  No part of this assignment has been copied manually or electronically from anyother source (including web sites)
//  or distributed to other students.
//  Name   Rup Gautam   Student ID  033838152
# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)

{

    // player stats varibles

    int playerStrength = 10;
    int playerDefense = 20;
    int playerIntelligence = 40;
    int playerHP = 10;

    // enemy stats varibles

    int enemyStrength = 30;
    int enemyDefense = 40;
    int enemyIntelligence = 25;
    int enemyHP = 10;

    // user selection
    int selector;

    printf("Battle Start!\n");

    while (playerHP > 0 && enemyHP > 0) {

        printf("Your HP:%d Enemy HP:%d\n", playerHP, enemyHP);

        // select move 1 or 2
        printf("1 - Attack\n");
        printf("2 - Magic\n");

        printf("Select your move:");

        scanf("%d", & selector);

        if (selector == 1) {

            float enemyAttackPower, playerAttackPower;
            enemyAttackPower = ((float) playerStrength / enemyDefense);
            playerAttackPower = ((float) enemyStrength / playerDefense);

            // test
            // printf("%f, %f\n", enemyAttackPower, playerAttackPower);
            enemyHP = ((int) enemyHP - enemyAttackPower * 5);
            playerHP = ((int) playerHP - playerAttackPower * 5);
            printf("You attacked the enemy!\n");



        }
        if (enemyHP < 1)
            printf("You Won!\n");

        else {
            printf("The enemy attacked you!\n");
            if (playerHP < 1)
                printf("You Died!\n");
        }


        // second option starts here

        if (selector == 2) {

            float enemyMagicPower, playerMagicPower;
            enemyMagicPower = ((float) playerIntelligence / enemyIntelligence);
            playerMagicPower = ((float) enemyIntelligence / playerIntelligence);

            // float enemyMagicPower, playerMagicPower;
            enemyHP = ((int) enemyHP - enemyMagicPower * 5);
            playerHP = ((int) playerHP - playerMagicPower * 5);
            printf("You attacked the enemy!\n");

        }
        if (enemyHP < 0)
            printf("You Won!\n");

        else {

            if (enemyHP < 0)
                printf("You Died!\n");
        }

    }
    return 0;
}
