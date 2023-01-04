/*
 * main.c
 *
 *  Created on: Jan 4, 2023
 *      Author: Mohamed Abd El Mawgoud Ghoneam
 *      Author Email: ghoneamm4@gmail.com
 */


#include <stdio.h>

int main(){

	int num=99 ;
	setbuf(stdout,NULL);

	int sum=0;
	for (int i=1 ;i<=num ;i++){
		sum+=i;
	}

	printf("summation of values bet. (1to99)= %d",sum);

	return 0;
}
