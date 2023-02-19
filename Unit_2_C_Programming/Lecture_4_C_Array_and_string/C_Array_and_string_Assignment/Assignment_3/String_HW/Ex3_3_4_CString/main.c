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

	printf("Enter the string : ");
	char str[1000];
	gets(str);
	int i;
	for (i=0;i<1000&&str[i]!=0;i++){}
	printf("Reverse string is : ");
	for(int j=0;j<i;j++) printf("%c",str[i-j-1]);

	return 0;
}

