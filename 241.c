#include "stdio.h"
int a,b,c,d,e,f;
int main(){
    scanf("%d%d%d",&a,&b,&c);
    scanf("%d%d%d",&d,&e,&f);

    printf("(%d)i+(%d)j+(%d)k",b*f-c*e,(a*f-c*d)*-1,a*e-b*d);
    return 0 ;
}