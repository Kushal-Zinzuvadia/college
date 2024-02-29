#include <stdio.h>
int sum(int);
int main()
{ 
int no,ans,n;
printf("Enter number");
scanf("%d",&no);
ans=sum(no); 
printf("sum of digits=%d",ans); 
return 0;
}

int sum(int n)
{
    static int ans=0;
    if(n>0)
        {   
            ans+=(n%10);
            return  sum(n/10);
        }
    else
        return ans;
}