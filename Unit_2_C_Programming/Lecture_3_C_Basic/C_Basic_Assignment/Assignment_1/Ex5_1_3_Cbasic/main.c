/*
 * main.c
 *
 *  Created on: Jan 8, 2023
 *      Author: Mohamed Abd El Mawgoud Ghoneam
 *      Author Email: ghoneamm4@gmail.com
 */


#include <stdio.h>

int main(){

	char letter ;
	int ASCII;
	setbuf(stdout,NULL);

	printf("Enter a character : ");
	scanf(" %c",&letter);


	ASCII=letter;

	printf("ASCII value of %c = %d",letter,ASCII);


}
