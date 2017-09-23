#include<stdio.h>

int main(void) {
	int n;
	int back=0;
	
	scanf("%d",&n);
	
	while(1) {
		if(n%5==0) {
			back+=n/5;
			break;
		} else if(n>=3) {
			n-=3;
			back++;
		} else {
			back = -1;
			break;
		}
	}
	
	printf("%d",back);
	
}
