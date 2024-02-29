#include<stdio.h>
int main()
{
    int a[100];
    int n,e,i,j;

    printf("Enter no. of elements=");
    scanf("%d",&n);

    printf("Enter array\n");
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        }

    printf("Enter element to be deleted=");
    scanf("%d",&e);

    if(e<=n)
    {
    for(i=0;i<n;i++)
        {
            if(a[i]==e)
            {
                for(j=i;j>=i && j<n;j++)
                {
                a[j]=a[j+1];
                }
            }
        }

    printf("New array=\n");
    for(i=0;i<n-1;i++)
        {
        printf("%d\n",a[i]);
        }
    }

    else
        {
            printf("Element not found");
        }
    return 0;
}