#include<stdio.h>
#include<math.h>

int main(){
    int i,j=0,n,result;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
            result=pow(i,i+1)/i;
           if(i%2==0) j=j-result;
           else j=j+result;
        }
     printf("%d",j);   
    return 0;
}