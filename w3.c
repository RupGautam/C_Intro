#include <stdio.h>

int main(){


    // variable defining player's stats
    const int pStrength = 10;
    const int pDefense = 20;
    const int pIntelligence = 40;
    const int pHP = 10;
    // varible defining enemy's stats
    const int eStrength = 30;
    const int eDefense = 40;
    const int eIntelligence = 25;
    int eHP = 10;

    //selection
    int select;

    //power generator
    float eAttackPower;
    float pAttackPower;

   //starting game
   printf("\n\n\n");
   printf("+------------------------------------+\n");
   printf("|------------------------------------|\n");
   printf("|   B A T T L E    S T A R T S ! ! ! |\n");
   printf("|------------------------------------|\n");
   printf("+------------------------------------+\n");

   printf("    Your HP:  %d Enemy HP:   %d\n\n\n", pHP, eHP);

   printf("1 - Attack\n 2 - Magic\n");
   printf("Select your move:  %d", select);
   scanf("%d", &select);


      if(select == 1){ //if user selects 1 we attack
          eAttackPower = (float) pStrength / eDefense;
          eHP = ((float) (eHP - (eAttackPower * 5)));
          printf("Health: %lf\n", eHP );
          printf("Attack: %lf\n", eAttackPower );
}

return 0;

    }
