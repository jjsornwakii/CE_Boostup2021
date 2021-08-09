#include <stdio.h>

float x[100],sum=0,dis;
int n,i,j,k,p[100];
int main(){

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf(" %f %d",&x[i],&p[i]);
        
        
    }
    for(i=0;i<n;i++){
        x[i] *= (float)p[i];
       // printf(" %f %d\n",x[i],p[i]);
        sum+=x[i];
    }
   // for(i=0;i<n;i++)
        //  printf("%f",sum);
        if(sum>400){
            dis = sum * .1;
        }
        else if(sum>200){
            dis = sum * .05;
        }

        if(dis>200.00)
            dis = 200;

        printf("%.2f",sum-dis);

    return 0;
}