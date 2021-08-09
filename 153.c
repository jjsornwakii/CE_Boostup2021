#include<stdio.h>
 
int main()
{   
    int i,c=0;
    double x;
    scanf("%lf",&x);
    int xx= x;
    if(x-xx==0){

    for(i=1; i<=x; i++){
         
        if((i==1 || i%2 == 0 || i%3 == 0 || i%5==0 || i%7==0) && (i!=2 && i!=3 && i!=5 && i!=7)){
            continue;
        }
        if(xx%i==0){
            c=1;
            break;
        }
             
    }
     if(c!=1)
        printf("IS PRIME");

    else
        printf("IS NOT PRIME");
    
    }
    else
        printf("IS NOT PRIME");
    return 0;
}