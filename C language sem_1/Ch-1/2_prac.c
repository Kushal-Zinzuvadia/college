#include<stdio.h>

int main(){
    int radius;
    int height;
    float pi = 3.14;
    printf("Enter radius ");
    scanf("%d", &radius);
    printf("Enter height ");
    scanf("%d", &height);
    printf("Area of circle is %f\n", pi*radius*radius);
    printf("Volume of circle is %f", pi*radius*radius*height);
    return 0;
}