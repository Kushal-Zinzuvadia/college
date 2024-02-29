#include<stdio.h>
int main()
{
    int a[5];
    int n,e,i;
    printf("Enter array of 5 elements\n");
    for(i=0;i<5;i++)
        {
        scanf("%d",&a[i]);
        }
    printf("Enter index=");
    scanf("%d",&n);
    printf("Enter element=");
    scanf("%d",&e);
    printf("New array=\n");
    a[n]=e;
    for(i=0;i<5;i++)
        {
        printf("%d\n",a[i]);
        }
    }