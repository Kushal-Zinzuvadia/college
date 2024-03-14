#include<stdio.h>

int main(){
    int i=0,j,k,count=0,pos=0;
    char s[100];
    char ss[100];
    gets(s);
    gets(ss);
    while(s[i]!='\0')
    {
        k=0;
        j=i;
        while(s[j]==ss[k] && ss[j]!='\0')
            {
                j++;
                k++;
            }
        if(ss[k]=='\0')
            {
                pos=k;
                printf("position=%d\n",pos);
                count++;
            }
        i++;
    }
    printf("count=%d",count);
    return 0;
}