/*
 * main.c
 *
 *  Created on: Mar 13, 2023
 *      Author: Mohamed Abd El Mawgoud Ghoneam
 *      Author Email: ghoneamm4@gmail.com
 */




#include <stdio.h>
#include <string.h>

int findName(char names[][14], int n, char name[]){
	int k;
	for(int i=0;i<n;i++){
		k=!stricmp(name,names[i]);
		if(k==1)
			break;
	}
	return k;
}

int main()
{
	setbuf(stdout,NULL);

	char name[14];
	char names[5][14] = {"Alaa", "Osama", "Mamdouh","Samy", "Hossain"};
	puts("Enter your first name:");
	gets(name);
	if(findName(names, 5, name)==1)
	puts("Welcome");
	else
	puts("Goodby");

	return 0;
}
