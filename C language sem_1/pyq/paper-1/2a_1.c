#include<stdio.h>

int main(){
    int temp,x,a,b,c,d;
    label:
    printf("Enter number ");
    scanf("%d",&x);
        d=x%10;
        c=(x/10)%10;
         b=(x/100)%10;
          a=(x/1000);

    if(a+b==c*d){
        printf("%d",a+b+c+d);
       
    }
    else {goto label;}
    return 0;
}