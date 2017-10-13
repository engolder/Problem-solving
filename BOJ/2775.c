#include<stdio.h>

int apartment[16][16];
int main(void) {
	int t;
	int i,j,k,n;
	
	scanf("%d", &t);
	
	for(i=1;i<=16;i++) {
		apartment[0][i] = 1;
		apartment[i][0] = 1;
	}
	
	for(i=1;i<16;i++) {
		for(j=1;j<16;j++) {
			apartment[i][j] = apartment[i - 1][j] + apartment[i][j - 1];
			
		}
	}
	
	while(t--) {
		scanf("%d %d",&k,&n);
		printf("%d\n",apartment[k+1][n-1]);
	}
}
