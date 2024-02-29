#include<stdio.h>
#include<string.h>
void sort(char s1[],char s2[]){
    int i,j;
    char s3[200];
    strcpy(s3,strcat(s1,s2));
    puts(s3);
}

int main(){
    char s1[100],s2[100];
    gets(s1);
    gets(s2);
    sort(s1,s2);
    return 0;
}