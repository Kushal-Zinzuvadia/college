#include<stdio.h>
#include<string.h>
void abc(char s1[],char s2[]);
int main(){
    char s1[100],s2[100];
    gets(s1);
    gets(s2);
    abc(s1,s2);
    return 0;
}
void abc(char s1[],char s2[])
{
    int n,i,l,c;
    l=strlen(s1);
    printf("NO. of characters=");
    scanf("%d",&c);
    n=strlen(s1)-c-1;
    for(i=n;i<strlen(s1)+strlen(s2)-1;i++)
        {
            s1[l]==s2[i];
            l++;
        }
    s1[l]='\0';
    printf("string=%s",s1);
}