/*
 * main.c
 *
 *  Created on: Jan 8, 2023
 *      Author: Mohamed Abd El Mawgoud Ghoneam
 *      Author Email: ghoneamm4@gmail.com
 */


#include <stdio.h>

int main(){

	float product , a ,b;
	setbuf(stdout,NULL);

	printf("Enter two numbers to multiply a = ");
	scanf("%f",&a);
	printf("b = ");
	scanf("%f",&b);

	product=a*b;

	printf("product = %f",product);


}
