#include<stdio.h>

int main(void) {
	int sum=1;
	int cnt=1;
	int k=6;
	int n;
	
	scanf("%d",&n);
	
	while(1) {
		if(sum>=n) break;
		sum+=k;
		k+=6;
		cnt++;
	}
	
	printf("%d",cnt);
}
