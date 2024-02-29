#include<stdio.h>

struct date{
    int day;
    int month;
    int year;
}dt;

void isvalid(struct date dt)
{
    
    int flag=0;

    if(dt.year%400==0)
    {
        flag=1;
    }
    
    else if(dt.year%4==0 && dt.year%400 != 0)
    {
        flag=1;
    }

    switch (dt.month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if(dt.day>0 && dt.day<=31)
            {
                printf("1");
            }

            else
                printf("0");    
        break;

        case 4:
        case 6:
        case 9:
        case 11:
            if(dt.day>0 && dt.day<=30)
                printf("1");

            else
                printf("0");
        break;

        default:
            if(flag==1)
                {
                    if(dt.day>0 && dt.day<=29)
                        {
                            printf("1");
                        }
                }
            
            else if(dt.day>0 && dt.day<=28)
                {
                    printf("1");
                }

            else
                printf("0");
        break;
        }
}

int main(){
    printf("Enter date in ddmmyyyy format\n");
    scanf("%d %d %d",&dt.day,&dt.month,&dt.year);
    isvalid(dt);
    return 0;
}