#include<stdio.h>

struct node{
    char x1,x2,x3;
};

int main(){
    struct node p1 = {'1', '0', 'a'+2};
    struct node *ptr = &p1;
    printf("%c,%c",*((char*)ptr+1),*((char*)ptr+2));
    return 0;
}