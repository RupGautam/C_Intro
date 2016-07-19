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
#include <stdio.h>
#include <stdlib.h>

char getTileType(unsigned int index);
void displayBoard(unsigned int size);

int main()
{
    int s = 1;
    if (getTileType(153) != 'W') printf("153 should return W");
    else if (getTileType(65) != 'L') printf("65 should return L");
    else if (getTileType(49) != 'G') printf("49 should return G");
    else if (getTileType(0) != 'C') printf("0 should return C");
    else if (getTileType(105) != 'G') printf("105 should be G");
    else if (getTileType(79) != ' ') printf("79 should be space");
    else
    {
        printf("getTileType test passed!\nEnter board size: ");
        scanf("%d", &s);
        displayBoard(s);
    }
    return 0;
}
//Function getTiletype definition

char getTileType(unsigned int index)
{
    char c;
    //if index is  0 return C as tile type
    if(index==0)
    {
        c='C';
    }
    //if index is  7 return G as tile type
    else if(index%7==0)
    {
        c='G';
    }
    //if index is  5 return L as tile type

    else if(index%5==0)
    {
        c='L';
    }
    //if index is  3 return W as tile type
    else if (index%3==0)
    {
        c='W';
    }
    //if index is  other than mentioned above return " " (space) as tile type as mentioned in pdf file
    else
    {
        c=' ';
    }
    return c;
}

void displayBoard(unsigned int size)
{ int index=0;
    int i=0;

    for(i=0; i<size; i++)
    {
        printf(" ___");
        printf("  ");
    }
    printf("\n");
    i=0;

    for(i=0; i<size; i++)
    {
        printf("| %c",getTileType(index));
        printf(" |");
        printf(" ");
        index++;

    }
    printf("\n");
    i=0;
//print lower both sides and lower part of boxes in first row
    for(i=0; i<size; i++)
    {
        printf("|___| ");
    }
    printf("\n");

    if(size>1)
    { //calculating the max index number to be used for box at the last

        int max_index;
        max_index = size*size-(((size-2)*(size-2)));

        max_index--;
        int j=0;

        for(j=0; j<size-2; j++)

          // upper part of boxes
            for(i=0; i<2; i++)
            {
                printf(" ___");
                printf("  ");
                int k=0;
                //spaces between both boxes equal to number of box in between them  to make  patteren like a box
                for(k=0;k<size-2;k++)
                {
                    printf("      ");
                }
            }
            printf("\n");
            i=0;
            //upper sides of boxes with character in it
            for(i=0; i<2; i++)
            {
        if(i==0)
                {
                    printf("| %c", getTileType(max_index));
                    max_index--;

                }
                //index is used for last boxes in rows so used simple index and increment it
                else
                {
                    printf("| %c", getTileType(index));
                    index++;
                }
                printf(" |");
                printf(" ");
                int k=0;
                for(k=0;k<size-2;k++)
                {
                    printf("      ");
                }

            }
            printf("\n");
            i=0;
             //print lower both sides and lower part of boxes in all rows (except 1st and last)
            for(i=0; i<2; i++)
            {
                printf("|___| ");
                int k=0;
                for(k=0;k<size-2;k++)
                {
                    printf("      ");
                }
            }
            printf("\n");


        }
        //Last row of box
        //upper lines of all the boxes using this loop in last row
        for(i=0; i<size; i++)
    {
        printf(" ___");
        printf("  ");
    }
    printf("\n");
    i=0;

    for(i=0; i<size; i++)
    {
        printf("| %c", getTileType(max_index));
        printf(" |");
        printf(" ");
        max_index--;

    }
    printf("\n");
    i=0;

    //print lower both sides and lower part of boxes in last row
    for(i=0; i<size; i++)
    {
        printf("|___| ");
    }
    printf("\n");

    }


