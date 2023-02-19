/*
 * main.c
 *
 *  Created on: Feb 13, 2023
 *      Author: Mohamed Abd El Mawgoud Ghoneam
 *      Author Email: ghoneamm4@gmail.com
 */


#include <stdio.h>

int main(){
	setbuf(stdout,NULL);

	int n;
		printf("Enter no of elements (n) : ");
		scanf("%d",&n);
		int a_n[n],a;
		for(int i=0;i<n;i++)scanf("%d",&a_n[i]);
		searched:
		printf("Enter the element to be searched : ");
		scanf("%d",&a);

		for(int i=0;i<n;i++){
			if(a_n[i]==a){
				printf("Number found at the location = %d",i+1);
				break;
			}
			else if(i==n-1&&a_n[i]!=a){
				printf("number not found\n"
						"if you need enter another value enter any one key except 'n' : ");
				char d;
				scanf(" %c",&d);
				if(d=='n') continue;
				else goto searched;
			}
		}

	return 0;
}

