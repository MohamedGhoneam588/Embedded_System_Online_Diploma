/*
 * main.c
 *
 *  Created on: Jan 4, 2023
 *      Author: Mohamed Abd El Mawgoud Ghoneam
 *      Author Email: ghoneamm4@gmail.com
 */


#include <stdio.h>


int main(){

	int n=9 ,i,h;

	for (i=0 ;i<=n;i++){
		for(h=i;h<=n;h++){
			printf("%d ",h);
		}
		printf("\n");
	}
	return 0;
}
