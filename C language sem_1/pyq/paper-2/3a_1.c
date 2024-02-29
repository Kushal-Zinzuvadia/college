#include<stdio.h>

int main(){
    int n,k=0,i;
    scanf("%d",&n);
    while(n>0){
        i=n%10;
        k=k+i;
        n=n/10;
    }
    printf("%d",k);
    return 0;
}