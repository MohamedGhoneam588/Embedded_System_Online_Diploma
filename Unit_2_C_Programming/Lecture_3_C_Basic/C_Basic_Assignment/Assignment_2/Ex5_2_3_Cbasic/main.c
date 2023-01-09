/*
 * main.c
 *
 *  Created on: Jan 9, 2023
 *      Author: Mohamed Abd El Mawgoud Ghoneam
 *      Author Email: ghoneamm4@gmail.com
 */


#include <stdio.h>

int main(){

	char ch;
	setbuf(stdout,NULL);

	printf ("Enter a character: ");
	scanf(" %c",&ch);


	if ((ch<91&&ch>64)||(ch>96&&ch<123)){
		printf ("%c is an alphabet.",ch);
	}
	else{
		printf ("%c is not an alphabet.",ch);
	}

	return 0;
}
