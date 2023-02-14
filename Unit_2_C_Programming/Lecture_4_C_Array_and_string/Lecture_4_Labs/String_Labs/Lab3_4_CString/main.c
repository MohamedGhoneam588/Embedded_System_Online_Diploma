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

	char names [5][14]= { "Alaa", "Osama", "Mamdouh" ,"Samy" ,"Hossain" } ;
	char name [14] ;
	char K='a'-'A';
	int i,l[5]={0,0,0,0,0};

	printf ("Enter your name : ") ;
	scanf( "%s" ,name);
	for (i=0 ;i<5 ; i++){
		for(int j=0;j<14&&(names[i][j]!=0||name[j]!=0);j++){
			if(name[j]!=names[i][j]&&name[j]!=names[i][j]+K&&name[j]!=names[i][j]-K){
				l[i]++;
			}
		}
		if(l[i]==0){
				printf ( " Congratulation ,your name is in the list");
				break;
		}
	}

	if (i==5)
		printf ("We are sorry, your name is not listed");

	return 0;
}
