#include<stdio.h>

int main(void) {
	int cnt=1; //�ݺ��� ����� �������� ��� 
	int index=0,j; //index : x�϶����� �˻� 
	int x;
	
	scanf("%d",&x);
	
	while(1) { 
		
		for(j=1;j<=cnt;j++) {
			index ++; //index���� 
			if(index == x) { //���� x�� index��� ��� 
				if(cnt%2 == 0) {
					printf("%d/%d",j,cnt+1-j);
				} else { //cnt�� Ȧ �� �϶��� �ݴ�� 
					printf("%d/%d",cnt+1-j,j);
				}
				return 0; //�ݺ��� Ż�� �� ���� 
			}
		}
		
		cnt++; //cnt���� 
	}
}
