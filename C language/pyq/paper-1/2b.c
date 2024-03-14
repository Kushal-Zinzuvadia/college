#include<stdio.h>

int main(){
    int i,j,n;
    printf("Enter:");
    scanf("%d",&n);

    for(i=1;i<=2*n;i++)
        {
            for(j=1;j<=i;j++)
                {
                   if(i%2==0)printf("2");
                     else printf("1");
                }
        printf("\n");
           
        }
    
    return 0;
}
