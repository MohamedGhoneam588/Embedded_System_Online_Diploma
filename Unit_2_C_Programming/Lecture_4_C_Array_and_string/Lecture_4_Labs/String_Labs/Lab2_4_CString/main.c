/*
 * main.c
 *
 *  Created on: Feb 14, 2023
 *      Author: Mohamed Abd El Mawgoud Ghoneam
 *      Author Email: ghoneamm4@gmail.com
 */


#include <stdio.h>
//#include <string.h>
int main(){
	setbuf(stdout,NULL);

	char a[20]={"Amr"} , b[20]={"Hisham"};
//	strlwr(a); strupr(b);
//	printf(" %s %s \r\n",a,b);

	char K='a'-'A';
	for(int i=0;i<20&&a[i]!=0;i++){
		if(a[i]<='a'){
			a[i]+=K;
		}
	}
	for(int i=0;i<20&&b[i]!=0;i++){
		if(b[i]>='a'){
			b[i]-=K;
		}
	}
	printf(" %s %s\r\n",a,b);
	return 0;
}
