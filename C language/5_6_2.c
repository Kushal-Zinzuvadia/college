#include<stdio.h>
void main()
{
    int a[50],i,n,j,k,c=0;
    
    printf("Enter the number of elements of array:");
    scanf("%d",&n);
    printf("\n");

    for (i = 0; i < n; i++)
    {
    scanf("%d",&a[i]);
    }
    printf("\n");

    printf("Enter element to be deleted=");
    scanf("%d",&k);

    for ( i = 0; i < n; i++)
    {
        if(a[i]==6)
        {
            for ( j = 0; i < n; i++)
            {
                a[j]=a[j+1];
            }
            c++;
            i--;
        }

    printf("New array is:");
    for ( i = 0; i < n-c; i++)
    {
        printf("%d\n",a[i]);
    }  
    }
}