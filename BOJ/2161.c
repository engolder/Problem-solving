#include<stdio.h>

int arr[2000]; //�����ִ� ���ڵ� 
int outarr[1000]; //���� ī���(��¿�) 

int main(void) {
	int n;
	int cnt=0; //�ݺ��� Ż��� 
	int rear; //�迭�� ���κ��� ���ϴ� �ε��� 
	int i;
	
	scanf("%d",&n);
	rear = n;
	//n�� 7�� �ִ´ٰ� �� ��, 
	//�迭�� index 6������ ���ڰ� ������
	//7�� �� �迭�� ��
	
	for(i=0;i<n;i++) 
		arr[i] = i+1;
	//�迭�� ���� �Է� 
	
	i=0;
	//for���� �ƴ����� �ݺ��� ���� �ε������� �ʱ�ȭ 
	
	while(1) {
		//��¿� �迭�� �迭���� �Ѱ��� ���� 
		outarr[cnt++]=arr[i++];
		//�� ���� ���ڸ� �迭�� ������ ���� 
		arr[rear++]=arr[i++];
		//���� ��¿� �迭�� ���ڸ� n�� �Ű�ٸ� Ż�� 
		if(cnt == n) break;
	}
	
	//��� 
	for(i=0;i<n;i++)
		printf("%d ",outarr[i]);
}
