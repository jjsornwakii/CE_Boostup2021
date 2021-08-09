#include <stdio.h>
#include <math.h>
int i;
double x[4];
int main(){
    for(i=0;i<3;i++)
    scanf("%lf",&x[i]);


    for(i=0;i<2;i++){
        for(int j=1;j<3;j++){
            if(x[i]>x[i+1]){
                double temp;
                temp = x[i+1];
                x[i+1] = x[i];
                x[i] = temp;
            }
        }
    }

    double s;
    s= sqrt((x[0]*x[0])+(x[1]*x[1]));
  //  printf("%lf",s);

   // for(i=0;i<3;i++)
    //printf("%lf\n",x[i]);
    
   
    if(x[2]==s)
        printf("\"Wow! Pythagorean theorem\"");
    else
        printf("\"Oh nooo!\"");
}