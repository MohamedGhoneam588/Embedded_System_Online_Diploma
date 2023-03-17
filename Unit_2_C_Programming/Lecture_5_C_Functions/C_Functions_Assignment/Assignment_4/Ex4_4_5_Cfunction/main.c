/*
 * main.c
 *
 *  Created on: Mar 13, 2023
 *      Author: Mohamed Abd El Mawgoud Ghoneam
 *      Author Email: ghoneamm4@gmail.com
 */




#include <stdio.h>

int out=1;
// num^x function
int power (int num,unsigned int x){
	out*=num;
	x--;
	if(x>0) power(num,x);
	return out;
}

int main()
{
	setbuf(stdout,NULL);
	int num;
	unsigned int x;
	printf("Enter base number: ");
	scanf("%u",&num);
	printf("Enter power number(positive integer): ");
	scanf("%u",&x);
	printf("(%d) ^ %u =  %d",num,x,power(num,x));
	return 0;
}
