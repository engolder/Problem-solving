#include<stdio.h>

int main(void) {
	int temp,max=0;
	int i;
	int n;
	float sum=0;
	
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		scanf("%d",&temp);
		sum+=temp;
		if(temp > max)
			max = temp;
	}
	
	printf("%.2f",(sum/n)/max*100);
}
