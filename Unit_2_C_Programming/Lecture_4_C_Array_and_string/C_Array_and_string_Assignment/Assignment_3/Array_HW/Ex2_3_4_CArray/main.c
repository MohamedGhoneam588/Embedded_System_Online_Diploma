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
	printf("Enter the numbers of data :");
	scanf("%d",&n);

	float a[n],sum=0;

	for(int i=0;i<n;i++){
		printf("%d. Enter number : ",i+1);
		scanf("%f",&a[i]);
		sum+=a[i];
	}
	printf("Average = %.2f",sum/n);

	return 0;
}

