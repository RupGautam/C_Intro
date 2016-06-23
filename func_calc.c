
//function simple + _ / * calc 
//simple calculator with function 
//func_calc.c
#include <stdio.h>

float calc(float right, float  left, float sum){
	char o;
	if (o == '+')
		sum = right + left;
	
	else if ( o == '-'){
		sum = right - left;
	}
	else if (o == '*'){
		sum = right * left;
	}
	else if (o == '/'){
		sum = right / left;
	}
	else
		sum = right / left;
	
	return sum;
	
}

int main(){
	float a, b, total;
	char select;
	
	printf("Enter a : ");
	scanf("%f", &a);
	printf("Enter a : ");
	scanf(" %c", &select);
	printf("Enter a : ");
	scanf("%f", &b);
	total = calc(a, b, total);
	printf("Total %f", total);
	
	
	
	return 0;
	
}
