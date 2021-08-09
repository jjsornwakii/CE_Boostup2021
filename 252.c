#include <stdio.h>
float x1,x2,y1,y2;
int main(){
    scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
    printf("X=%.2f\n",(x1+x2)/2.0F);
    printf("Y=%.2f\n",(y1+y2)/2.0F);
    return 0;
}