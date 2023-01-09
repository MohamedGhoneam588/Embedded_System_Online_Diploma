/*
 * main.c
 *
 *  Created on: Jan 7, 2023
 *      Author: Mohamed Abd El Mawgoud Ghoneam
 *      Author Email: ghoneamm4@gmail.com
 */


#include <stdio.h>

int main(){

	int num;
	setbuf(stdout,NULL);

	printf("Enter a integer: ");
	scanf("%d",&num);
	printf("You entered: %d",num);

}
