/*
 * main.c
 *
 *  Created on: Jan 9, 2023
 *      Author: Mohamed Abd El Mawgoud Ghoneam
 *      Author Email: ghoneamm4@gmail.com
 */


#include<stdio.h>

int main(){

	char alphabet;
	setbuf(stdout,NULL);

	printf("Enter an alphabet: ");
	scanf(" %c",&alphabet);

	if(alphabet=='a'||alphabet=='e'||alphabet=='i'||alphabet=='o'
			||alphabet=='u'||alphabet=='A'||alphabet=='E'||alphabet=='I'
					||alphabet=='O'||alphabet=='U'){

		printf("%c is a vowel.",alphabet);

	}
	else{
		printf("%c is a consonant.",alphabet);
	}

}
