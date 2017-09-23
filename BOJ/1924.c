#include<stdio.h>

int main(void) {
	int x,y,i;
	
	scanf("%d %d",&x,&y);
	
	for(i=1;i<x;i++) {
		switch(i) {
			case 1 :
			case 3 :
			case 5 :
			case 7 :
			case 8 :
			case 10 :
			case 12 : y+=31; break;
			case 4 : 
			case 6 :
			case 9 :
			case 11 : y+=30; break;
			case 2 : y+=28; break;
		}
	}
	
	switch(y%7) {
		case 0 : printf("SUN"); break;
		case 1 : printf("MON"); break;
		case 2 : printf("TUE"); break;
		case 3 : printf("WED"); break;
		case 4 : printf("THU"); break;
		case 5 : printf("FRI"); break;
		case 6 : printf("SAT"); break;
	}
}
