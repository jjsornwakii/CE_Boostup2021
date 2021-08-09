#include <stdio.h>
int a,b,c,d;
int main(){
    scanf("%d %d",&a,&b);
    scanf("%d %d",&c,&d);
    printf("(%d)+(%d)i",a*c-b*d,a*d+b*c);
}