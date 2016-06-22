//
//  main.c
//  C_App
//
//  Created by Rup Gautam on 2016-06-14.
//  Copyright © 2016 Rup Gautam. All rights reserved.
//

//pointer_swap_function.c

#include <stdio.h>

void swap( int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	
	int x = 100; int y = 300;
	swap(&x, &y);
	printf("New a : %d  \nNew b: %d\n", x, y);
	
	


	return 0;
}
	

