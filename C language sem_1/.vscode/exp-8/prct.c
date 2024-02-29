#include<stdio.h>
int f(int x)
{ 
if(x<=4) 
    return x; 
return f(--x); 
}
int main()
{ 
printf("%d",f(7));
return 0;
}
