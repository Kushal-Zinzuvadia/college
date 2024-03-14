#include<stdio.h>

int main(){
    int x[]={600,500,400,300,200,100};
    int *y[]={x,x+1,x+2,x+3,x+4,x+5};
    int **z=y+1;
    z++;
    printf("%ld %ld %d\n",z-y,*z-x,**z);
    *z++;
    printf("%ld %ld %d\n",z-y,*z-x,**z);
    ++*z;
    printf("%ld %ld %d\n",z-y,*z-x,**z);
    ++**z;
    printf("%ld %ld %d\n",z-y,*z-x,**z);
    return 0;
/*
2 2 400
3 3 300
3 4 200
3 4 201
*/
}