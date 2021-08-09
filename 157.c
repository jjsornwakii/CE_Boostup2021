#include <stdio.h>

int n,a,b,c,d;
int main(){
    scanf("%d",&n);
if(n%50==0){
    a = n / 1000;
    printf("%d, ",a);
    n -= (a*1000);
    a = n / 500;
    printf("%d, ",a);
    n -= (a*500);
    a = n / 100;
    printf("%d, ",a);
    n -= (a*100);
    a = n / 50;
    printf("%d",a);
    }
    else
        printf("error");
}