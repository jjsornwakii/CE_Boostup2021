#include<stdio.h>
float d;
int i=0,day,week,n;
char c;
int main() 
{
 
    scanf("%d%[^\n]c",&n,&c);
    //printf("%d",c);
    d = n*100; // g
    
    if(d>0&&c==0)
    {
    while(1){
            d-=200;
            i++;
            if(d<=0){
              break;
            } 
    }
    week = i / 7;
    //printf("i = %d\n",i);
    day = i - (week * 7);
    printf("Takes about %d weeks %d days",week,day);
    }
    
    
    else
  printf("ERROR");
}
   
    