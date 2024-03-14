#include<stdio.h>

int main(){
    int a,b,c,d;
    printf("Enter number ");
    scanf("%1d%1d%1d%1d",&a,&b,&c,&d);
    if(a+b==c*d){
        printf("%d",a+b+c+d);
    }
    else{
        printf("Enter number ");
    scanf("%1d%1d%1d%1d",&a,&b,&c,&d);
    }
    return 0;
}