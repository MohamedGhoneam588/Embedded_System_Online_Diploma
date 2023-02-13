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

	float S[10];
	for (int i=0;i<10;i++){
		printf("Enter student %d degree : ",i+1);
		scanf("%f",&S[i]);
		printf("\n");
	}

	for (int i=0;i<10;i++){
		printf("Student %d degree is %.2f \n",i+1,S[i]);
	}

	return 0;
}

