#include<stdio.h>

int number[2];
int main(void) {
	int n;
	int cmp;
	int cnt=0;
	
	scanf("%d",&n);
	cmp = n;
	
	while(1) {
		number[0] = n%10;
		number[1] = (n/10 + n%10) % 10;
		
		n = number[0] * 10 + number[1];
		cnt ++;
		
		if(cmp == n) {
			break;
		}
	}
	printf("%d",cnt);
}
