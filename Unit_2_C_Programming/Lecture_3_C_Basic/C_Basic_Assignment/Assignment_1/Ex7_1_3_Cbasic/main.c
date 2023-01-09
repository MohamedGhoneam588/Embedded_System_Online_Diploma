/*
 * main.c
 *
 *  Created on: Jan 8, 2023
 *      Author: Mohamed Abd El Mawgoud Ghoneam
 *      Author Email: ghoneamm4@gmail.com
 */


#include <stdio.h>
#include <math.h> //for Method 3rd

int main(){

	float a=1 ,b=1;
	setbuf(stdout,NULL);

	printf("Enter two numbers to Swap a = ");
	scanf("%f",&a);
	printf("b = ");
	scanf("%f",&b);

//  first method (success for specific numbers (positive only) not work for negative and zero)
//	a=b*a;
//	b=a/b;
//	a=a/b;

//  2nd method (success for all numbers)
	a=a+b;
	b=a-b;
	a=a-b;

//  3rd method (success for specific numbers (positive only)not work for negative and zero)
//	a=pow(b,a);
//	b=log(a)/log(b);
//	a=exp(log(a)/b);

	printf("\n");
	printf("After swapping, value of a = %f \n",a);
	printf("After swapping, value of b = %f",b);


}
