#include <stdio.h>

    int main() {


        // variable defining player's stats
        const int pStrength = 10;
        const int pDefense = 20;
        const int pIntelligence = 40;
        int pHP = 10;
        // varible defining enemy's stats
        const int eStrength = 30;
        const int eDefense = 40;
        const int eIntelligence = 25;
        int eHP = 10;

        //selection
        int select;

        //starting game
        printf("\n\n\n");
        printf("+------------------------------------+\n");
        printf("|------------------------------------|\n");
        printf("|   B A T T L E    S T A R T S ! ! ! |\n");
        printf("|------------------------------------|\n");
        printf("+------------------------------------+\n");

        // start the loop
        while (pHP > 0 && eHP > 0) {
            printf("Your HP:  %d Enemy HP:   %d\n\n\n", pHP, eHP);

            printf("1 - Attack \n2 - Magic\n");
            printf("Select your move:  ");
            scanf("%d", & select);


            if (select == 1) { //if user selects 1 we attack

                float eAttackPower, pAttackPower;

                // enemy side calculation
                eAttackPower = (float) pStrength / eDefense;
                eHP = ((float)(eHP - (eAttackPower * 5)));

                //player side calculation
                pAttackPower = (float) eStrength / pDefense;
                pHP = ((float)(pHP - (pAttackPower * 5)));
                printf("You attacked the enemy!\n");

                //  printf("Your HP: %d Enemy HP: %d\n", (int)pHP, (int)eHP );

            }
            if (eHP < 1)
                printf("You Won!\n");

            else {

                printf("The enemy attacked you!\n");
                if (pHP < 1)
                    printf("You Died!\n");
            }

            if (select == 2) {

                float emagicHP, pmagicHP;

                emagicHP = (float) pIntelligence / eIntelligence;
                pmagicHP = (float) eIntelligence / pIntelligence;

                eHP = (int) eHP - (emagicHP * 5);
                pHP = (int) pHP - (pmagicHP * 5);

                printf("You shocked the enemy\n");
                printf("You attacked the enemy!\n");

                //printf("Your HP: %d Enemy HP: %d\n", (int)pHP, (int)eHP );

            }
            if (pHP < 0)
                printf("You Won!\n");

            else {

                if (eHP < 0)
                    printf("You Died!\n");
            }


        }
        return 0;

    }