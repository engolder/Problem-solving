#include<stdio.h>

int main(void) {
	int n,i,cnt=0;
	
	scanf("%d",&n);
	
	for(i=1;i<=n && i<100;i++) {
		cnt++;
	}
	for(i=100;i<=n && i<1000;i++) {
		if((i%100/10) - (i/100) == (i%10) - (i%100/10)) cnt++;
	}
	
	printf("%d",cnt);
}
