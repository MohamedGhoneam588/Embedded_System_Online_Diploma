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

	int n,k;
	printf("Enter no of elements (n) : ");
	scanf("%d",&n);
	float a_n[n],a_n1[n+1],a;
	for(int i=0;i<n;i++)scanf("%f",&a_n[i]);
	printf("Enter the element to be inserted : ");
	scanf("%f",&a);
	reenter_k:
	printf("Enter the location : ");
	scanf("%d",&k);
	if(k>n+1){
		printf("location must be equal to or less than (n+1)\n"
				"please Reenter location again\r\n");
		goto reenter_k;
	}
	for(int i=0;i<n+1;i++){
		a_n1[i]=(i<k-1)*a_n[i]+(i==k-1)*a+(i>k-1)*a_n[i-1];
		printf("%.0f ",a_n1[i]);
	}

	return 0;
}

