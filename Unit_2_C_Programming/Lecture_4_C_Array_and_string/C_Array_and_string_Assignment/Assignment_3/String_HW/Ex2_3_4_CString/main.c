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

	printf("Enter a string: ");
	char str[1000];
	gets(str);
	int i;
	for (i=0;i<1000&&str[i]!=0;i++){}
	printf("Length of string: %d",i);
	return 0;
}

