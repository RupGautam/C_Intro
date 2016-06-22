//
//  main.c
//  C_App
//
//  Created by Rup Gautam on 2016-06-14.
//  Copyright © 2016 Rup Gautam. All rights reserved.
//

//pointer.c

#include <stdio.h>

int main(){
	float left;
	float right;
	
	char o;
	
	do{
		
		printf("Enter Values: ");
		scanf("%f %c %f", &right, &o, &left);
		
		if ( o == '+')
			printf("Result: %f\n", right - left);
		else if ( o == '-')
			printf("Result: %f\n", right - left);
		else if ( o == '*')
			printf("Result: %f\n", right * left);
		else
			printf("Result: %f\n", right / left);
	}
	while (o != 'y');
	
		printf("Continue...\n");
	
	return 0;
}
	

