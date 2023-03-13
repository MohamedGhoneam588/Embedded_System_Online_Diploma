/*
 * main.c
 *
 *  Created on: Mar 13, 2023
 *      Author: Mohamed Abd El Mawgoud Ghoneam
 *      Author Email: ghoneamm4@gmail.com
 */




#include <stdio.h>

int factorial (int x){
	int fact=1,i;
	for(i=1;i<=x;i++)
		fact*=i;
	return fact;
}

int main()
{
	setbuf(stdout,NULL);
//	int fact,x;
//	printf("Enter a number to calc factorial : ");
//	scanf("%d",&x);
//	fact=factorial(x);
//	printf("Factorial(%d) = %d",x,fact);
	printf("Factorial(%d) = %d\r\n",10,factorial(10));
	printf("Factorial(%d) = %d\r\n",0,factorial(0));
	printf("Factorial(%d) = %d\r\n",5,factorial(5));


	return 0;
}
