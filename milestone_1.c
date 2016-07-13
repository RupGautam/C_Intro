
# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

char getTileType(unsigned int);
void displayBoard(unsigned int);
void boxes(int);

char getTileType(unsigned int index) {
        char k;

        if (index == 0)
            k = 'C';

        else if (index % 7 == 0)
            k = 'G';

        else if (index % 5 == 0)
            k = 'L';

        else if (index % 3 == 0)
            k = 'W';

        else
            k = ' ';

        return k;
    }

void displayBoard(unsigned int size) {
        boxes(size);
        /* Display board only if user input is greater than 2 */

        if (size > 2) {
            boxes(size);
        }
        if (size > 1) {
            boxes(size);
        }
    }

void boxes ( int size){
      int i;
      for (i = 0; i < size; i++) {
            printf(" ___ ");
        }
        printf("\n");

        for (i = 0; i < size; i++) {
            printf("| %c |", getTileType(i));
        }
        printf("\n");

        for (i = 0; i < size; i++) {
            printf("|___|");
        }
        printf("\n");

}

int main(void) {
        int s = 1;

        printf("--Program Start--\n\n");

        if (getTileType(153) != 'W')
            printf("153 should return W");

        else if (getTileType(65) != 'L')
            printf("65 should return L");

        else if (getTileType(49) != 'G')
            printf("49 should return G");

        else if (getTileType(0) != 'C')
            printf("0 should return C");

        else if (getTileType(105) != 'G')
            printf("105 should be G");

        else if (getTileType(79) != ' ')
            printf("79 should be space");

        else {
            printf("Enter board size: ");
            scanf("%d", & s);
            displayBoard(s);
        }
        return 0;
    }
