/*
 * main.c
 *
 *  Created on: Jan 8, 2023
 *      Author: Mohamed Abd El Mawgoud Ghoneam
 *      Author Email: ghoneamm4@gmail.com
 */


#include <stdio.h>

int main(){

	float sum , a ,b;
	setbuf(stdout,NULL);

	printf("Enter two numbers to sum a = ");
	scanf("%f",&a);
	printf("b = ");
	scanf("%f",&b);

	sum=a+b;

	printf("Sum = %f",sum);


}
