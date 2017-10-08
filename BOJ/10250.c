#include<stdio.h>

int main(void) {
	int t,h,w,n; //입력할 수, 호텔의 층 수, 각 층의 방 수, 몇 번째 손님인지
	
	scanf("%d",&t);
	
	for(;t>0;t--) {
		scanf("%d %d %d",&h,&w,&n); //호텔의 층 수, 각 층의 방 수, 몇 번째 손님인지 입력받음
		if(n%h == 0) printf("%d%02d\n", h, n/h );
		// w는 사용하지 않음, h와 n으로만 연산하여 나눗셈의 몫과 나머지로 처리함
		// 원하는 값을 얻기위해 조건문으로 예외처리하여 조정 
		else printf("%d%02d\n",n%h , n/h+1 ); 
	}
}
