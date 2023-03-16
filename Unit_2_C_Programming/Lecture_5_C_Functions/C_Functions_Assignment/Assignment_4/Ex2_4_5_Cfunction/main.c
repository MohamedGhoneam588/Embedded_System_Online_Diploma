/*
 * main.c
 *
 *  Created on: Mar 13, 2023
 *      Author: Mohamed Abd El Mawgoud Ghoneam
 *      Author Email: ghoneamm4@gmail.com
 */




#include <stdio.h>
unsigned int fact=1;
unsigned int factorial (unsigned int x){
	fact*=x;
	x--;
	if(x>0)
		factorial(x);
	return fact;
}

int main()
{
	setbuf(stdout,NULL);
	unsigned int x;
	printf("Enter an positive integer (12 or smaller - "
			"any another value not correct ): ");
	scanf("%u",&x);
	printf("Factorial of %u =  %u",x,factorial(x));
	return 0;
}
