/*
 * main.c
 *
 *  Created on: Jan 10, 2023
 *      Author: Mohamed Abd El Mawgoud Ghoneam
 *      Author Email: ghoneamm4@gmail.com
 */


#include <stdio.h>

int main(){

	int num;
	setbuf(stdout,NULL);

	printf("Enter an integer: ");
	scanf("%d",&num);

	int sum=0;
	for (int i=1 ;i<=num ;i++){
		sum+=i;
	}

	printf("Sum = %d",sum);

	return 0;
}
