/* Raise an integer to an integer 
 * power.c
 * 
 * /
 #include <stdio.h>

 int main(){
     int base, exp, ans;

     printf("Enter base: ");
     scanf("%d", &base);
     printf("Enter exp: ");
     scanf("%d", &exp);
     ans = power(base, exp);
     printf("%d powered by %d is : %d", base, exp, ans);

     
     }
