#include<stdio.h>

typedef struct calendar{
    int date;
    int month;
    int year;
}d1,d2;

void compare(struct calendar d1,struct calendar d2){
    if(d1.year>d2.year)
        printf("Date 1 is latest");
    
    else if(d1.year<d2.year)
        printf("Date 2 is latest");

    else if(d1.year=d2.year){
        if(d1.month>d2.month)
        printf("Date 2 is latest");
    
        else if(d1.month<d2.month)
        printf("Date 1 is latest");

        else if(d1.month=d2.month)
            {
                if(d1.date>d2.date)
                    printf("Date 2 is latest");
    
                else if(d1.date<d2.date)
                    printf("Date 1 is latest");

                else if(d1.date=d2.date)
                    printf("Date are same.");
            }
    }
}

int main(){
   int i;
   printf("Date format: dd mm yyyy\n");
   printf("Enter date 1\n");
   scanf("%2d%2d%2d",&d1.date,&d1.month,&d1.year); 
   printf("Enter date 2\n");
   scanf("%2d%2d%2d",&d2.date,&d2.month,&d2.year); 
   compare(d1,d2);
    return 0;
}