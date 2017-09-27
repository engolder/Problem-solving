#include<stdio.h>

int arr[10001];
int func(int n) {
	int sum=n;
	
	while(n>0) {
		sum += n%10;
		n /= 10;
	}
	
	arr[sum] = 1;
}
int main(void) {
	int i;
	
	for(i=1;i<=10000;i++) {
		func(i);
	}
	for(i=1;i<=10000;i++) {
		if(arr[i] == 0) printf("%d\n",i);
	}
}
