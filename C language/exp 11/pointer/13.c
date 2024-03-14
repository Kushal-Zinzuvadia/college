#include<stdio.h>
#include<string.h>

struct player
{
    char pname[20];
}p1;
char *fun(struct player *);

int main(){
    strcpy(p1.pname,"Virat");
    printf("%s %s",p1.pname,fun(&p1));
    return 0;
}

char *fun(struct player *temp_p1)
{
    strcpy(temp_p1->pname,"Rohit");
    return temp_p1->pname;
}-++