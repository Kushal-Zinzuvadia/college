#include<stdio.h>

int main(){
    int length, breadth;
    printf("Enter length\n");
    scanf("%d", &length);

    printf("Enter breadth\n");
    scanf("%d", &breadth);
    
    printf("The area of the rectangle is %d", length*breadth);
    return 0;
}