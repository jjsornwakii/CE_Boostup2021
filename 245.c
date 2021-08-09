#include "stdio.h"

double x,b;
char t;
int a;
int main(){
    scanf("%lf%[^\n]c",&x,&t);
    if(t==0){
    a = x;
    
    b = x/a;

        if(b==1)
            printf("TRUE");
        else
            printf("FALSE");
    }

    else
        printf("FALSE");
    
    return 0 ;
}