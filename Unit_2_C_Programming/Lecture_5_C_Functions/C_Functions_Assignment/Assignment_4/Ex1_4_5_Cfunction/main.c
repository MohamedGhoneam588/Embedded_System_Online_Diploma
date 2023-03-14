/*
 * main.c
 *
 *  Created on: Mar 13, 2023
 *      Author: Mohamed Abd El Mawgoud Ghoneam
 *      Author Email: ghoneamm4@gmail.com
 */




#include <stdio.h>

int is_prime(int x){
	if(x==1) return 0;
	else{
		for(int i=2;i<x/2;i++){
			if(x%i==0){return 0;break;}
		}
		return 1;
	}
}

int main()
{
	setbuf(stdout,NULL);

	int i,j,k;

	printf("Enter two numbers(intervals): ");
	scanf("%d",&i);
	scanf("%d",&j);
	if(i>j){k=i;i=j;j=k;}

	printf("Prime numbers between %d and %d are: ",i,j);
	for(int x=i;x<=j;x++){
		k=is_prime(x);
		if(k==1) printf("%d ",x);

	}

	return 0;
}
