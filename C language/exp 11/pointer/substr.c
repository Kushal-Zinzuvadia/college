#include<stdio.h>
#include<string.h>

int occ(char str[],char substr[])
{
int i,count=0,j;
i=strlen(str);
j=strlen(substr);
for(int p=0;p<i;)
    {
    for(int q=0;q<j;)
       {
       if(substr[q]==str[p])
              {
              p++;
              q++;
              if(substr[j-1]==str[p])
              count++;
              }
       else
       p++;
       }
    }
return(count);
}

void main()
{

int ans;
int i,j;
char str[100],substr[20];

i=strlen(str);
j=strlen(substr);
gets(str);
gets(substr);
ans=occ(str,substr);
printf("No. Of occurrences=%d",ans);
}