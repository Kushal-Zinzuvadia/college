#include<stdio.h>
struct node{
    int z;
    int *p;
};
int main(){
    struct node x[3],*y;
    int b[3]={100,200,300};
    y=&x[0];
    x[0].z=40; 
    x[1].z=50; 
    x[2].z=60; 
    x[1].p=b;
    int theta=++y->z;
    int delta=(++y)->z;
    int alpha=*y->p++;
    int beta=(*y->p)++;
    int gamma=*y++->p;
    printf("%d\n%d\n%d\n%d\n%d",theta,delta,alpha,beta,gamma);
    return 0;
}