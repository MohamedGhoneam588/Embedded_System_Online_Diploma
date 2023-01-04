/*
 * main.c
 *
 *  Created on: Jan 4, 2023
 *      Author: Mohamed Abd El Mawgoud Ghoneam
 *      Author Email: ghoneamm4@gmail.com
 */


#include <stdio.h>

int main(){

	int num_of_num,n,kmin=1,keqmin=1,k1min ;
	setbuf(stdout,NULL);

	printf("Enter the number of the numbers you "
			"need check max and min of them : ");
	scanf("%d",&num_of_num);

	printf("Enter your number Num%d = ",1);
	scanf("%d",&n);



	int min=n;
	for (int i=1 ;i<num_of_num ;i++){
		printf("Enter your number Num%d = ",i+1);
		scanf("%d",&n);

		if(n!=min){
			kmin= (n<min) ? i+1:kmin;
			min= (n<min) ? n:min;
		}
		else{
			keqmin++;
			k1min=min;
		}
	}


	printf("\n");
	if(keqmin==num_of_num){
		printf("all numbers is equal");
	}
	else if(k1min==min){
		printf("that is more than one number is min and min=%d \n",min);

	}
	else{
		printf("the min is num%d=%d \n",kmin,min);
	}

	//	printf("k1=%d   ,   k2=%d",keqmin,keqmax);
	return 0;
}
