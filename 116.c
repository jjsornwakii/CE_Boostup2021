#include <stdio.h>
#include <math.h>

 long double a,b,i,s=0;
int main(){
    scanf("%llf %llf",&a,&b);

    for(i=a;i<=b;i++){
        s+=((i*i)+(6*i)+9);
    }
    printf("%llf",s);
}