#include<stdio.h>
 
int main (void){
    int n, result = 0 ;
    int i;
    
    scanf("%d", &n);
    
    for(i=1 ; result < 1000000000 ; i++){
        result = 3*i*i - (3*i) + 1;
        if(n <= result){
            printf("%d", i);
            break;
        }     
    }
}
