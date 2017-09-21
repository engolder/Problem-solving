#include<stdio.h>

int arr[2000]; //남아있는 숫자들 
int outarr[1000]; //버린 카드들(출력용) 

int main(void) {
	int n;
	int cnt=0; //반복문 탈출용 
	int rear; //배열의 끝부분을 뜻하는 인덱스 
	int i;
	
	scanf("%d",&n);
	rear = n;
	//n에 7을 넣는다고 할 때, 
	//배열은 index 6까지만 숫자가 들어감으로
	//7은 곧 배열의 끝
	
	for(i=0;i<n;i++) 
		arr[i] = i+1;
	//배열에 숫자 입력 
	
	i=0;
	//for문이 아님으로 반복문 전에 인덱스변수 초기화 
	
	while(1) {
		//출력용 배열에 배열인자 한개를 넣음 
		outarr[cnt++]=arr[i++];
		//그 다음 인자를 배열의 끝으로 보냄 
		arr[rear++]=arr[i++];
		//만약 출력용 배열에 숫자를 n번 옮겼다면 탈출 
		if(cnt == n) break;
	}
	
	//출력 
	for(i=0;i<n;i++)
		printf("%d ",outarr[i]);
}
