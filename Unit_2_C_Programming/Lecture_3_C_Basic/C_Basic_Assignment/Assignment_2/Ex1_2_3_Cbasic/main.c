/*
 * main.c
 *
 *  Created on: Jan 9, 2023
 *      Author: Mohamed Abd El Mawgoud Ghoneam
 *      Author Email: ghoneamm4@gmail.com
 */


#include <stdio.h>

int main(){

	int num , remainder;
	setbuf(stdout,NULL);

	printf("Enter an integer you want to check: ");
	scanf("%d",&num);

	remainder=num%2;

	if(remainder==1){
		printf("%d is odd",num);
	}
	else{
		printf("%d is even",num);
	}
}
