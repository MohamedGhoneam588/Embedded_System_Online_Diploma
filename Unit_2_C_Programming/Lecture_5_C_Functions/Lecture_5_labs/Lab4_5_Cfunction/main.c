/*
 * main.c
 *
 *  Created on: Mar 13, 2023
 *      Author: Mohamed Abd El Mawgoud Ghoneam
 *      Author Email: ghoneamm4@gmail.com
 */




#include <stdio.h>

//create function print n numbers from i
void printnnumfromi(int n,int i){
	int h;
	for(h=i;h<=n;h++){
		printf("%d ",h);
	}
}

int main()
{
	setbuf(stdout,NULL);

	int n=9 ,i;

	for (i=0 ;i<=n;i++){
		printnnumfromi(n,i);
		printf("\n");
	}

	return 0;
}
