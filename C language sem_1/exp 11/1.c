#include<stdio.h>

void swap(int *a1,int *b1)
{
    int temp;
    temp=*a1;
    *a1=*b1;
    *b1=temp;
}

int main(){
    int *a1,*b1;
    int a,b;
    a1=&a;
    b1=&b;
    scanf("%d",a1);
    scanf("%d",b1);
    swap(*a1,*b1);
    printf("Exchanged values\na=%d\nb=%d\n",*a1,*b1);
    return 0;
}