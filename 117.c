#include <stdio.h>
#include <math.h>

long long int a,b,i,s=0;
int main(){
    scanf("%lld %lld",&a,&b);

if(b<a){
    int temp;
    temp =b;
    b = a;
    a = temp;
}


    for(i=a;i<=b;i++){
        s+=((i*i)+(6*i)+9);
    }
    printf("%lld",s);
}