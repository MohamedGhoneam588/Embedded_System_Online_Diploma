/*
 * main.c
 *
 *  Created on: Mar 13, 2023
 *      Author: Mohamed Abd El Mawgoud Ghoneam
 *      Author Email: ghoneamm4@gmail.com
 */




#include <stdio.h>
#include <string.h>
void print_rev_str (char str[],int x){
	printf("%c",str[x-1]);
	x--;
	if(x>0) print_rev_str(str,x);
}

int main()
{
	setbuf(stdout,NULL);
	int x;
	char str[1000];
	printf("Enter a sentence: ");
	gets(str);
	x=strlen(str);
	print_rev_str(str,x);
	return 0;
}
