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
	int l,n;
	printf("Enter rows and column of matrix : ");
	scanf("%d %d",&l,&n);

	float m[l][n];
		for (int i=0;i<l;i++){
			for(int j=0;j<n;j++){
				printf("Enter element a%d%d : ",i+1,j+1);
				scanf("%f",&m[i][j]);
			}
		}
		printf("Entered matrix :\n");
		for(int i=0;i<l;i++){
			for(int j=0;j<n;j++){
				printf("%.2f  ",m[i][j]);
			}
			printf("\r\n");
		}
		printf("Transpose matrix :\n");
		for(int i=0;i<n;i++){
			for(int j=0;j<l;j++){
				printf("%.2f  ",m[j][i]);
			}
			printf("\r\n");
		}

	return 0;
}

