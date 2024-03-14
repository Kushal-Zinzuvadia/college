#include<stdio.h>
void cp(char s1[],char s2[],int x);
int main()
{
    char str1[50]={0},str2[50]={0};
    int num;
    gets(str1);
    gets(str2);
    scanf("%d",&num);
    cp(str1,str2,num);
    puts(str1);
    return 0;
}
void cp(char s1[],char s2[],int x)
    {
        int i=0,j=0,k=0;
        for(i=0;s1[i]!='\0';i++);
        while(j<x)
            {
                s1[i]=s2[k];
                i++;
                j++;
                k++;
            }
        s1[i+1]='\0';
    }