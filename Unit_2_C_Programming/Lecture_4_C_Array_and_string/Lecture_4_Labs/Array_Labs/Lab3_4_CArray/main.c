/*
 * main.c
 *
 *  Created on: Feb 14, 2023
 *      Author: Mohamed Abd El Mawgoud Ghoneam
 *      Author Email: ghoneamm4@gmail.com
 */


#include <stdio.h>

int main(){
	setbuf(stdout,NULL);

	float m[3][3];
	for (int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("Enter the item (%d, %d) : ",i+1,j+1);
			scanf("%f",&m[i][j]);
		}
	}
	printf("the matrix is\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%.2f  ",m[i][j]);
		}
		printf("\r\n");
	}
	printf("the Transpose matrix is\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%.2f  ",m[j][i]);
		}
		printf("\r\n");
	}

	return 0;
}

