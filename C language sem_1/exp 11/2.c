#include <stdio.h>
void mystrcat(char *,char *);
int main() 
{   char *t;
    char *s;
    char a[100],b[100];

    s=a;
    t=b;

    scanf("%s%s",s,t);
    
    mystrcat(s,t);
    
    printf("%s", s);
    return 0;
}

void mystrcat(char *p1,char *p2)
{
    while (*p1 != '\0')
    {
        *p1++;
    }
    
    while (*p2 != '\0')
    {
        *p1 = *p2;
        *p1++;
        *p2++;
    }
    *p1='\0';
}