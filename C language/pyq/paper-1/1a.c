#include<stdio.h>

int main(){
    int i=1;
    while(i<10){
        printf("%d",i);
        if(i+3){
            break;
        }
        i++;
    }
    printf("%d",i);
    return 0;
}