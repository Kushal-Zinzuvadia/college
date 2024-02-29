#include<stdio.h>

int main(){
    int m,i;
    scanf("%d",&m);
    i=(m%12)+1;
    switch(i){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
                printf("31");
                break;
        case 4:
        case 6:
        case 9:
        case 11:
                printf("30");
                break;
        default:
                printf("28");
    }
    return 0;
}