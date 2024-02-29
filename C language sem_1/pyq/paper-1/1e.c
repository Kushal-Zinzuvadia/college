#include<stdio.h>

int main(){
    int i;
    float f;
    scanf("%3d %*d %f", &i, &f);
    printf("%123d-%5.3f",i,f);
    return 0;
}