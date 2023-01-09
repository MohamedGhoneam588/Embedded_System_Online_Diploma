/*
 * main.c
 *
 *  Created on: Jan 4, 2023
 *      Author: Mohamed Abd El Mawgoud Ghoneam
 *      Author Email: ghoneamm4@gmail.com
 */


#include <stdio.h>

int main(){

	int numstudent;
	float sum=0 , deg=0 ,average=0;
	setbuf(stdout,NULL);

	printf("Enter the number of the students : ");
	scanf("%d",&numstudent);

	for (int i=1 ;i<=numstudent ;i++){
		printf("Enter student Num%d  degree = ",i);
		scanf("%f",&deg);

		sum+=deg;
	}
	average=sum/numstudent;

	printf("Average students degree =%f ",average);


	return 0;
}
