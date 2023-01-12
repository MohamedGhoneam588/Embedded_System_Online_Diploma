/*
 * main.c
 *
 *  Created on: Jan 10, 2023
 *      Author: Mohamed Abd El Mawgoud Ghoneam
 *      Author Email: ghoneamm4@gmail.com
 */


#include <stdio.h>

int main(){

	float result ,op1 ,op2;
	char art_op , choice;
	setbuf(stdout,NULL);

	do{

		printf("Enter operator either + or - or * or (/)divide : ");
		scanf(" %c",&art_op);

		switch(art_op){

		case'+':{
			printf("Enter two operands :op1 = ");
			scanf("%f",&op1);
			printf("op2 = ");
			scanf("%f",&op2);

			result=op1+op2;
			printf("op1 + op2 = %f + %f = %f",op1,op2,result);
		}
		break;
		case'-':{
			printf("Enter two operands :op1 = ");
			scanf("%f",&op1);
			printf("op2 = ");
			scanf("%f",&op2);

			result=op1-op2;
			printf("op1 - op2 = %f - %f = %f",op1,op2,result);
		}
		break;
		case'*':{
			printf("Enter two operands :op1 = ");
			scanf("%f",&op1);
			printf("op2 = ");
			scanf("%f",&op2);

			result=op1*op2;
			printf("op1 * op2 = %f * %f = %f",op1,op2,result);
		}
		break;
		case'/':{
			printf("Enter two operands :op1 = ");
			scanf("%f",&op1);
			printf("op2 = ");
			scanf("%f",&op2);

			result=op1/op2;
			printf("op1 / op2 = %f / %f = %f",op1,op2,result);
		}
		break;
		default:{
			printf("you should Enter only this operators (+,-,*,/)");
		}
		break;
		}

		printf("\n\rfor another operation press 'y' or 'n' to exit (or any key except 'y') :  ");
		scanf(" %c",&choice);


	}
	while(choice=='y');
	return 0;
}
