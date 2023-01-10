/*
 * main.c
 *
 *  Created on: Jan 10, 2023
 *      Author: Mohamed Abd El Mawgoud Ghoneam
 *      Author Email: ghoneamm4@gmail.com
 */


#include <stdio.h>
#include <stdlib.h>

int main(){

	float result ,op1 ,op2;
	char art_op;
	setbuf(stdout,NULL);

	printf("Enter operator either + or - or * or (/)divide : ");
	scanf(" %c",&art_op);
	if(art_op!='-'&&art_op!='+'&&art_op!='*'&&art_op!='/'){
		printf("you should Enter only this operators (+,-,*,/)");
		exit(0);
	}
	printf("Enter two operands :op1 = ");
	scanf("%f",&op1);
	printf("op2 = ");
	scanf("%f",&op2);

	if(art_op=='+'){
		result=op1+op2;
		printf("op1 + op2 = %f + %f = %f",op1,op2,result);
	}
	else if(art_op=='-'){
		result=op1-op2;
		printf("op1 - op2 = %f - %f = %f",op1,op2,result);
	}
	else if(art_op=='*'){
		result=op1*op2;
		printf("op1 * op2 = %f * %f = %f",op1,op2,result);
	}
	else if(art_op=='/'){
		result=op1/op2;
		printf("op1 / op2 = %f / %f = %f",op1,op2,result);
	}

	return 0;
}
