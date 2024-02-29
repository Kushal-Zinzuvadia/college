#include<stdio.h>

int main(){
    float p, r, t;
    printf("Enter principal amount in rupees\n");
    scanf("%f",&p);
    printf("Enter rate of int\n");
    scanf("%f",&r);
    printf("Enter time in years\n");
    scanf("%f",&t);
    printf("The simple interest is %f",p*r*t/100);
    return 0;
}