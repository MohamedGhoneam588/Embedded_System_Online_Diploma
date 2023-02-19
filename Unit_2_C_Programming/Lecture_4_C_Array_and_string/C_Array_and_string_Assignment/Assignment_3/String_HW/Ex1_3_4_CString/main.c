/*
 * main.c
 *
 *  Created on: Feb 13, 2023
 *      Author: Mohamed Abd El Mawgoud Ghoneam
 *      Author Email: ghoneamm4@gmail.com
 */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	setbuf(stdout,NULL);

	int n;
	printf("Enter number of char in your string not exact but by sense"
			" (more than your string char is better) : ");
	scanf("%d",&n);

	char string_arr[n] ,ch;
	char K='a'-'A';
	int i,l=0,n2;

	printf("Enter a string : ");
	fflush(stdout); fflush(stdin);
	gets(string_arr);
	n2=strlen(string_arr);

	printf("Enter a character to find frequency: ");
	scanf(" %c",&ch);


	for (i=0 ;i<n2 ; i++){
		if(string_arr[i]==ch||
				((string_arr[i]==ch+K||string_arr[i]==ch-K)&&string_arr[i]>='A')){
			l++;
		}
	}
	printf("Frequency of %c = %d",ch,l);

	return 0;
}

