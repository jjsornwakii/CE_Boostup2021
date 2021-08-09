#include "stdio.h"
int a,b;
int temp,m ;
int gcd(int x,int y){
    if(x>y){
        m=x/y;
        x=x-(y*m);    
    }
    else {  
        m=y/x;
        y=y-(x*m);   
    }
    if(y==0){
        printf("%d",x);
        return 0;
    }
    if(x==0){
        printf("%d",y);
        return 0;
    }
    gcd(x,y);
}
    int main(){
        scanf(" %d %d",&a,&b);
        gcd(a,b);
        
    }