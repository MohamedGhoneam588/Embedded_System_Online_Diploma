/*
 * main.c
 *
 *  Created on: Feb 13, 2023
 *      Author: Mohamed Abd El Mawgoud Ghoneam
 *      Author Email: ghoneamm4@gmail.com
 */


#include <stdio.h>

int main(){
	setbuf(stdout,NULL);

	float x[5]={5,16,22,3.5,15},y[5];
	for (int i=0;i<5;i++){
		y[i]=5*x[i]*x[i]+3*x[i]+2;
		printf("y(%.2f) = %.2f\r\n",x[i],y[i]);
	}

	return 0;
}

