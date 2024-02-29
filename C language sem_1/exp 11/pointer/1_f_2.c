#include<stdio.h>

int main(){
    char a[]="WORLD";
    int i,j;
    for(i=0,j=5;i<j;a[i++]=a[j--]);
    printf("%s\n",a+3);
    return 0;
}