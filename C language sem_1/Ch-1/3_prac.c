#include<stdio.h>

int main(){
    float temp_in_c;
    printf("Enter temperature in degree celcius\n");
    scanf("%f",&temp_in_c);
    printf("temperature in farenheit is %f",(temp_in_c*1.8)+32);
    return 0;
}