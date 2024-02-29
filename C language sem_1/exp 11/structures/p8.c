#include<stdio.h>
struct bank{
    int acn;
    char name[20];
    int balance;
    int yr;
}acc[100];
int main(){
    int i;
    for(i=0;i<3;i++)
        {
            scanf("%d%s%d%4d",&acc[i].acn,acc[i].name,&acc[i].balance,&acc[i].yr);
        }
    
    printf("account details\n");
    for(i=0;i<3;i++)
        {
            printf("%d\t%s\t%d\t%4d\n",acc[i].acn,acc[i].name,acc[i].balance,acc[i].yr);
        }
    return 0;
}