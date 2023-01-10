/*
 * main.c
 *
 *  Created on: Jan 10, 2023
 *      Author: Mohamed Abd El Mawgoud Ghoneam
 *      Author Email: ghoneamm4@gmail.com
 */


#include <stdio.h>

int main(){

	int num ,fact=1;
	setbuf(stdout,NULL);

	printf("Enter an integer: ");
	scanf("%d",&num);
	if(num<0){
		printf("Error!!! Factorial of negative number doesn't exist.");
	}
	else if(num==0){
		printf("Factorial = %d",fact);
	}
	else{

		for (int i=1 ;i<=num ;i++){
			fact*=i;
		}

		printf("Factorial = %d",fact);
	}

	return 0;
}
