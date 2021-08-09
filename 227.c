#include<stdio.h>
double a,b,c;
double area;
int main() 
{
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a>0&&(b!=c)&&b>0&&c>0){
    area = (a*(b+c))*.5;
    printf("%lf",area);
    }
    else
        printf("Error");
    return 0;
}