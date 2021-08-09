#include "stdio.h"
int x;
int main(){
    scanf("%d",&x);

        if(x%3==0&&x%5==0&&x%7==0)
            printf("7");

        else if(x%5==0&&x%7==0)
            printf("6");

        else if(x%3==0&&x%7==0)
            printf("5");

        else if(x%7==0)
            printf("4");

        else if(x%3==0&&x%5==0)
            printf("3");

        else if(x%5==0)
            printf("2");

        else if(x%3==0)
            printf("1");
            
        else
            printf("0");

    return 0;
    
}