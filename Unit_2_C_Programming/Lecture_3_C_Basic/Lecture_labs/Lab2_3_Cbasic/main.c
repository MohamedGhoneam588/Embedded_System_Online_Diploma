/*
 * main.c
 *
 *  Created on: Jan 1, 2023
 *      Author: Mohamed Abd El Mawgoud Ghoneam
 *      Author Email: ghoneamm4@gmail.com
 */


#include <stdio.h>

int main(){

	int a,b,c;
	setbuf(stdout,NULL);

	printf ("Enter three numbers : ");
	printf ("a = ");
	scanf("%d",&a);
	printf ("b = ");
	scanf("%d",&b);
	printf ("c = ");
	scanf("%d",&c);

	if (a==b&&a==c&&b==c){
		printf ("the three numbers is equal a=b=c= %d ",b);
	}
	else if (a==b&&a>c){
		printf ("the biggest number is a and b a=b= %d ",b);
	}
	else if (a==c&&a>b){
		printf ("the biggest number is a and c a=c= %d ",c);
	}
	else if (b==c&&c>a){
		printf ("the biggest number is b and c b=c= %d ",b);
	}
	else if (a>b&&a>c){
		printf ("the biggest number is a = %d ",a);
	}
	else if (b>c){
		printf ("the biggest number is b = %d ",b);
	}
	else{
		printf ("the biggest number is c = %d ",c);
	}

	return 0;
}
