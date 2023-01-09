/*
 * main.c
 *
 *  Created on: Jan 9, 2023
 *      Author: Mohamed Abd El Mawgoud Ghoneam
 *      Author Email: ghoneamm4@gmail.com
 */


#include <stdio.h>

int main(){

	float a,b,c;
	setbuf(stdout,NULL);

	printf ("Enter three numbers : ");
	printf ("a = ");
	scanf("%f",&a);
	printf ("b = ");
	scanf("%f",&b);
	printf ("c = ");
	scanf("%f",&c);

	if (a==b&&a==c&&b==c){
		printf ("the three numbers is equal a=b=c= %f ",b);
	}
	else if (a==b&&a>c){
		printf ("the Largest number is a and b a=b= %f ",b);
	}
	else if (a==c&&a>b){
		printf ("the Largest number is a and c a=c= %f ",c);
	}
	else if (b==c&&c>a){
		printf ("the Largest number is b and c b=c= %f ",b);
	}
	else if (a>b&&a>c){
		printf ("the Largest number is a = %f ",a);
	}
	else if (b>c){
		printf ("the Largest number is b = %f ",b);
	}
	else{
		printf ("the biggest number is c = %f ",c);
	}

	return 0;
}
