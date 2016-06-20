//
//  main.c
//  Capp
//
//  Created by Rup Gautam on 2016-06-15.
//  Copyright © 2016 Rup Gautam. All rights reserved.
//

#include <stdio.h>

int is_lower_case(char);
int is_upper_case(char);
char to_upper_case(char);
char to_lower_case(char);


char to_lower_case(char ch){
    if (is_upper_case(ch))
        return ch + 32;
    else
        return ch;
}

char to_upper_case(char ch){
    if (is_lower_case(ch))
        return ch - 32;
    else
        return ch;
}


int is_lower_case(char ch){
    if (ch >= 'a' && ch <= 'z')
        return 1;
    else
        return 0;
}


int is_upper_case(char ch){
    if (ch >= 'A' && ch <= 'Z')
        return 1;
    else
        return 0;
}

int main(){
    
    char k;
    printf("Enter upper case letter: ");
    scanf("%c", &k);
    k = to_lower_case(k);
    printf("Lower case: %c\n", k);
    
    printf("Enter lower case letter: ");
    scanf("%c", &k);
    k = to_upper_case(k);
    printf("Lower case: %c\n", k);
    
    
    return 0;
    
}
