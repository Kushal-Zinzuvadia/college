#include<stdio.h>

int main(){
    int i;
    for(i=1; i<10; i++){
        if(0==i%3){
            continue;
        }
        printf("%d",i);
    }
    return 0;
}