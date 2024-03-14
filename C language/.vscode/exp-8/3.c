#include<stdio.h>
int sort(int [],int);
int main(){
    int i,arr[100],n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
    arr[n]=sort(arr,n);
    for(i=0;i<n;i++)
        {
            printf("%d",arr[i]);
        }
    return 0;
}

int sort(int arr[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
                {
                    if(arr[i]>arr[j])
                        {
                            temp=arr[i];
                            arr[i]=arr[j];
                            arr[j]=temp;
                        }
                }
        }
}