#include<stdio.h>
#include<math.h>

int main(){
    int i,j=1,n;
    float s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        j=j*i;
        
        s=s+pow(i,i)/j;
    }
    printf("%.2f",s);
    return 0;
}