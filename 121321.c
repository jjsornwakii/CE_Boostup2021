#include "stdio.h"
int x,s=0,i;
char c;
int main(){
    scanf("%d%[^\n]c",&x,&c);
    //printf("%c",c);
    if(x>=1&&c==0){
   for(i = 1;i<=x;i++)
    s+=i;

    printf("%d",s);
    }
    else
        printf("Error");

    return 0;
}