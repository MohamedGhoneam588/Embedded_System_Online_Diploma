/*
 * main.c
 *
 *  Created on: Feb 13, 2023
 *      Author: Mohamed Abd El Mawgoud Ghoneam
 *      Author Email: ghoneamm4@gmail.com
 */


#include <stdio.h>
//Dimension of 2D array need adding
#define k 2
#define n 2

int main(){
	setbuf(stdout,NULL);

	float a[k][n],b[k][n];

	printf("Enter the elements of 1st matrix\r\n");
	for(int i=0;i<k;i++){
		for(int j=0;j<n;j++){
			printf("Enter a%d%d : ",i+1,j+1);
			scanf("%f",&a[i][j]);
		}
	}

	printf("Enter the elements of 2st matrix\r\n");
	for(int i=0;i<k;i++){
		for(int j=0;j<n;j++){
			printf("Enter b%d%d : ",i+1,j+1);
			scanf("%f",&b[i][j]);
		}
	}

	printf("Sum Of Matrix\n");
	for(int i=0;i<k;i++){
		for(int j=0;j<n;j++){
			if(j<n-1) printf("%.1f   ",a[i][j]+b[i][j]);
			else printf("%.1f",a[i][j]+b[i][j]);
		}
		printf("\n");
	}

	return 0;
}

