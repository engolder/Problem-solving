#include<stdio.h>

int main(void) {
	int cnt=1; //반복문 시행시 조건으로 사용 
	int index=0,j; //index : x일때까지 검사 
	int x;
	
	scanf("%d",&x);
	
	while(1) { 
		
		for(j=1;j<=cnt;j++) {
			index ++; //index증가 
			if(index == x) { //만약 x가 index라면 출력 
				if(cnt%2 == 0) {
					printf("%d/%d",j,cnt+1-j);
				} else { //cnt가 홀 수 일때면 반대로 
					printf("%d/%d",cnt+1-j,j);
				}
				return 0; //반복문 탈출 및 종료 
			}
		}
		
		cnt++; //cnt증가 
	}
}
