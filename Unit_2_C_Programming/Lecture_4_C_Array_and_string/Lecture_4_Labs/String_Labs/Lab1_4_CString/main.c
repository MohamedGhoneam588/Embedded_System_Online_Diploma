/*
 * main.c
 *
 *  Created on: Feb 14, 2023
 *      Author: Mohamed Abd El Mawgoud Ghoneam
 *      Author Email: ghoneamm4@gmail.com
 */


#include <stdio.h>

int main(){
	setbuf(stdout,NULL);

//	char text1 [50] ,text2[50];
//	printf("Enter your first name\r\n");
//	scanf("%s ", text1) ; scanf("%s",text2);
//	printf("Your Name is %s %s\r\n",text1,text2) ;

	char text[100];
	printf("Enter your first name\r\n");
	gets(text);
	printf("Your Name is %s\r\n",text) ;

	return 0;
}
