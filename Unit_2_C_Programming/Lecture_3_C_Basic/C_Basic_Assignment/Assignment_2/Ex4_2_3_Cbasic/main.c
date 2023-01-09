/*
 * main.c
 *
 *  Created on: Jan 9, 2023
 *      Author: Mohamed Abd El Mawgoud Ghoneam
 *      Author Email: ghoneamm4@gmail.com
 */


#include <stdio.h>

int main(){

	float num;
	setbuf(stdout,NULL);

	printf ("Enter a numbers : ");
	scanf("%f",&num);


	if (num==0){
		printf ("You entered zero. ");
	}
	else if (num<0){
		printf ("%f is negative",num);
	}
	else{
		printf ("%f is positive",num);
	}

	return 0;
}
