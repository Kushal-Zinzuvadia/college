#include<stdio.h>
#include<ctype.h>

int main(){
    char ch1, ch2;
    scanf("%c%*c%c", &ch1, &ch2);
    printf("%c %c \n",ch1, ch2);
    if(!isspace(ch2))
        printf("%c %c", toupper(ch1), ch1);
    else
        printf("Welcome to DDU!!!");
    return 0;
}