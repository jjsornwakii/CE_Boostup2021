#include<stdio.h>
int i,a,b,c=0;
int main(){   
    scanf("%d %d",&a,&b);
    for(i=a; i<=b; i++){
         
        if((i==1 || i%2 == 0 || i%3 == 0 || i%5==0 || i%7==0) && (i!=2 && i!=3 && i!=5 && i!=7)){
            c++;
            continue;
            
        }
 
           
    }
     
     printf("%d",c);
    return 0;
}