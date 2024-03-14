#include<stdio.h>

int main(){
    int i=1;
    do{
        if(0==i%3){
            exit(0);
        }
        printf("%d",i);
        i+=1;
    } while(i<10);
    return 0;
}