/*
 * main.c
 *
 *  Created on: Jan 3, 2023
 *      Author: Mohamed Abd El Mawgoud Ghoneam
 *      Author Email: ghoneamm4@gmail.com
 */


#include <stdio.h>

int main(){

	int num_of_num,n,kmin=1,kmax=1,keqmin=1,keqmax=1,k1min,k2max ;
	setbuf(stdout,NULL);

	printf("Enter the number of the numbers you "
			"need check max and min of them : ");
	scanf("%d",&num_of_num);

	printf("Enter your number Num%d = ",1);
	scanf("%d",&n);



	int max=n,min=n;
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
		if(n!=max){
			kmax= (n>max) ? i+1:kmax;
			max= (n>max) ? n:max;
		}
		else{
			keqmax++;
			k2max=max;
		}
	}
	printf("\n");
	if(keqmin==num_of_num&&keqmax==num_of_num){
		printf("all numbers is equal");
	}
	else if(k1min==min&&k2max==max){
		printf("that is more than one number is min and min=%d \n",min);
		printf("that is more than one number is max and max=%d \n",max);
	}
	else if(k1min==min&&k2max!=max){
		printf("that is more than one number is min and min=%d \n",min);
		printf("the max is num%d=%d \n",kmax,max);
	}
	else if(k1min!=min&&k2max==max){
		printf("the min is num%d=%d \n",kmin,min);
		printf("that is more than one number is max and max=%d \n",max);
	}
	else{
		printf("the min is num%d=%d \n",kmin,min);
		printf("the max is num%d=%d \n",kmax,max);
	}

	//	printf("k1=%d   ,   k2=%d",keqmin,keqmax);
	return 0;
}
