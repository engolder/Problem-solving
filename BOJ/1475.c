#include<stdio.h>

char number[8];
int numCnt[9];

int main(void) {
	int i;
	int max=0;	
	
	scanf("%s",number);
	
	for(i=0;number[i]!=0;i++) {
		if(number[i] == '9') numCnt [6]++;
		else numCnt[ number[i]-48 ]++;
	}
	
	numCnt[6] = numCnt[6]/2 + numCnt[6]%2 ;
	
	for(i=0;i<9;i++) {
		if(numCnt[i] > max) max = numCnt[i];
	}
	
	printf("%d",max);
}
