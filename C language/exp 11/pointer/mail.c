#include<stdio.h>
void kite(char *);
int main(){
    char *a="ABCD EFGH";
    kite(a);
    return 0;
}
void kite(char *a)
{
    if(*a && *a!=' ')
    {
        kite(a+1);
        putchar(*a);
    }
}