#include <stdio.h>
#include <math.h>

int a,b,c,i=0;
float x1,x2;
int main(){
    scanf("%d %d %d",&a,&b,&c);




if(((b*b)>=4*a*c)&&a!=0){
    x1 = (((-1)*b) - sqrt((b*b)-(a*4*c)))*.5*a;
    x2 = (((-1)*b) + sqrt((b*b)-(a*4*c)))*.5*a;
    if(x2<x1){
        float t;
        t = x2;
        x2 = x1;
        x1 = t;
    }


    if(x2==x1)
        printf("x = %.2f",x1);
    else
        printf("x1 = %.2f, x2 = %.2f",x1,x2);
}
else
    printf("Error");

}