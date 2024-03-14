#include<stdio.h>

int main(){
    char a[]="PROGRAMMING";
    char *pt=&a[3];
    printf("%s",*(pt+1));
    return 0;
}