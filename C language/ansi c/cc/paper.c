#include<stdio.h>
#include<string.h>
struct person{
    char name[100];
    int weight;
    unsigned age        :7;
    unsigned sex        :1;
    unsigned child      :4;
}p[2];

void search(char nam[100])
{
    for(int i=0;i<2;i++)
    {
        if(strcmp(p[i].name[100],nam[100])==0)
        {
            printf("%s\n%d\n%d\n%c\n%d\n",p[i].name[100],p[i].weight,p[i].age,p[i].sex,p[i].child);
        }
    }
}

int main(){
    char nam[100];
    int age[2],child[2];
    char sex[2];
    for(int i=0;i<2;i++)
    {
    scanf("%s%d%d%c%d",&p[i].name[100],&p[i].weight,&age[i],&sex[i],&child[i]);
    }
    for(int i=0;i<2;i++)
    {
        p[i].age=age[i];
        p[i].sex=sex[i];
        p[i].child=child[i];
    }
    printf("Enter name to search\n");
    scanf("%s",&nam[100]);
    search(nam);
    return 0;
}