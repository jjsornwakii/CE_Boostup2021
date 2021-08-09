#include <math.h>
#include <stdio.h>

double x[6],y[6],d,dmax=0;
int i,j;
int main(){
    for (i = 1; i <= 5; i++)
    {
        scanf("%lf, %lf",&x[i],&y[i]);
    }

    for(i=1;i<=5;i++){
        for(int j=i+1;j<=5;j++){

        d = sqrt(pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2)); 
       // printf("%lf\n",d);
        }
        if(d>dmax){
            dmax = d ;
        }
    }




    d==0;
    for(i=1;i<=5;i++){
        for( j=i+1;j<=5;j++){
        
        d = sqrt(pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2));

            if(d == dmax){
            break;
            }
        }
        if(d == dmax){
        printf("%d\n",i);
        printf("%d",j);
        break;
        }
    }
    return 0;
    
}