/*
 * main.c
 *
 *  Created on: Mar 13, 2023
 *      Author: Mohamed Abd El Mawgoud Ghoneam
 *      Author Email: ghoneamm4@gmail.com
 */


#include <stdio.h>

int calcMin(int values[], int n){
	int min=values[0];
	for (int i=1 ;i<n ;i++){
		min= (values[i]<min) ? values[i]:min;
	}
	return min;
}

int main()
{
	setbuf(stdout,NULL);

	int xvalues [10] = {35,67 ,27, 54, 76,44, 59, 32,43,25};
	int yvalues [5] = {28,71,67,83,62};
	int zvalues [13] = {87, 21, 74, 36, 27, 64, 87, 63, 27, 86, 48, 32, 76};

	printf("The minimum of x, y, z values is (%d,%d,%d) \r\n" ,
			calcMin (xvalues , 10), calcMin (yvalues, 5) , calcMin (zvalues,13));

	return 0;
}
