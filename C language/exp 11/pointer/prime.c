#include<stdio.h>

int main(){
    int i,n,c=0;

    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
            {
            c++;
            }
    }

    if(c>0)
        {
            printf("Not prime");
        }

    else if(c==0)
        printf("Prime number");
    return 0;
}