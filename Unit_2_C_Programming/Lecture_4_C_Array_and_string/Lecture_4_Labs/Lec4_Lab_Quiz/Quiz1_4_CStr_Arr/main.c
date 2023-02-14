/*
 * main.c
 *
 *  Created on: Feb 14, 2023
 *      Author: Mohamed Abd El Mawgoud Ghoneam
 *      Author Email: ghoneamm4@gmail.com
 */


#include <stdio.h>
#include <stdlib.h>
#define s 1000
int main(){
	setbuf(stdout,NULL);

	int x[s],i,N=0;

	for(i=0;i<s;i++){
		x[i]=rand();
	}
	for(i=1;i<s;i++){
		if(x[i]>x[i-1]&&x[i]>x[i+1]){
			N++;
		}
	}
	printf("the number of values that satisfy the condition is %d",N);

		return 0;
}
