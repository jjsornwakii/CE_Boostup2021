#include<stdio.h>
double w,h,BMI;
int main() 
{
  scanf("%lf",&w);
  scanf("%lf",&h);
  h/=100;
  BMI = w / (h*h);
  printf("%lf\n",BMI);
    if(BMI>=30)
      printf("Obesity");
    else if(BMI>=25)
      printf("Overweight");
    else if(BMI>=18.5)
      printf("Normal");
    else
      printf("Underweight");
    return 0;
}