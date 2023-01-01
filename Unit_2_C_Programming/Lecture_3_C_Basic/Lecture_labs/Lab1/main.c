/*
 * Lab1.c
 *
 *  Created on: Jan 1, 2023
 *      Author: DELL
 */
#include <stdio.h>

#define M_PI 3.14159265358979323846

int main(){

//	setbuf(stdout,NULL);

	char choice;
	float area , circumference , radius;

	printf ("Enter circle radius : ");
	fflush (stdin);	fflush (stdout);
	scanf ("%f",&radius);

	printf ("enter your choice(a for circle area or c for circumference) : ");
	fflush (stdin);	fflush (stdout);
	scanf ("%c", &choice);
	//choice=getche();

	if (choice=='a'){
		area= M_PI * radius * radius ;
		printf ("\r\n area = %f \r\n",area);
	}
	else if (choice=='c'){
		circumference= 2 * M_PI * radius ;
		printf ("\r\n circumference = %f \r\n",circumference);
	}
	else{
		printf ("\r\n Wrong choice you can choice only a or c \r\n");
	}
	return 0;
}

