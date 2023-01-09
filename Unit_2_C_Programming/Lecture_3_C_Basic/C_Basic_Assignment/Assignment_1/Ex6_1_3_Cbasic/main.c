/*
 * main.c
 *
 *  Created on: Jan 8, 2023
 *      Author: Mohamed Abd El Mawgoud Ghoneam
 *      Author Email: ghoneamm4@gmail.com
 */


#include <stdio.h>

int main(){

	float a ,b ,swap;
	setbuf(stdout,NULL);

	printf("Enter two numbers to Swap a = ");
	scanf("%f",&a);
	printf("b = ");
	scanf("%f",&b);

	swap=a;
	a=b;
	b=swap;

	printf("\n");
	printf("After swapping, value of a = %f \n",a);
	printf("After swapping, value of b = %f",b);


}
