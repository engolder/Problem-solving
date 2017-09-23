#include<stdio.h>

int arr[1000];
double per[100];

int main(void) {
	int c,n,temp;
	int sum;
	int percnt;
	int i,j;
	
	double avr;
	
	scanf("%d",&c);
	
	for(i=0;i<c;i++) {
		percnt = 0;
		sum = 0;
		
		scanf("%d",&n);
		
		for(j=0;j<n;j++) {
			scanf("%d",&arr[j]);
			sum+=arr[j];
		}
		
		avr = (double)sum/n;
		
		for(j=0;j<n;j++) {
			if(arr[j] > avr) percnt++;
		}
		
		per[i] = (double)percnt/n*100;
	}
	
	for(i=0;i<c;i++) {
		printf("%.3f%%\n",per[i]);
	}
}
