#include <stdio.h>
int a, b ,g,l=1;

int gcd(int x,int y){
    while(1){
    if(y<x){
        int temp;
        temp = x;
        x = y;
        y = temp;
    }

    int i ,j ,k;
    i = y / x;
    y -= x*i;

    if(y==0)
        return x;

    else if(x==0)
        return y;

    }
}

int lcm(int x,int y){
    while(1){
    int i ,j ,k;

if(x%2==0||y%2==0){
    if(x%2==0){
        x/=2;
    }
    if(y%2==0){
        y/=2;
    }

    l*=2;




    if(y==1||x==1){
        l*=x*y;
        return l;
    
    }
}
else if(x%3==0||y%3==0){
    if(x%3==0){
        x/=3;
    }
    if(y%3==0){
        y/=3;
    }

    l*=3;




    if(y==1||x==1){
        l*=x*y;
        return l;
    
    }
}
else
    return x*y*l;

    }
}

int main()
{
   scanf("%d", &a);
   scanf("%d", &b);


    printf("%d ",gcd(a,b));
    printf("%d",lcm(a,b));
    return 0;
}