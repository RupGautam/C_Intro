#include <stdio.h>


void mainMenu(){
  printf("---Main Menu---\n");
  printf("1 - New Game\n");
  printf("2 - Load Game\n");
  printf("3 - Exit\n");
}

void clearScreen(){
  int i;
  for (i = 0; i < 40; i ++)
    printf("\n");
}

void newGame(){
  printf("Not Implemented choice one\n");
}

void loadGame(){
  printf("Not Implemented choice two\n");
}

void exitGame(){
  printf("Exiting Game!\n");
}
int validate(int low, int high);
int select;

int main(void){

 do {
        clearScreen(); // clear screen
        mainMenu(); // displaying main menu

  printf("select: ");
  scanf("%d", &select);

      if (select == 1) {
      newGame();
       } else if (select == 2) {
        loadGame();
       } else if (select == 3) {
         exitGame();
       }
     }
     while (select >= 4);
         printf("Invalid input, Try Again: \n");
}

