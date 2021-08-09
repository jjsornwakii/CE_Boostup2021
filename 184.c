#include <stdio.h>
#include <math.h>

int n,m,x[10],i=0,j,k,t=10,check1=0,check2=0;

int main(){
    scanf("%d",&n);
    m=n;

if(n>=1){
    while(1){
        if(m<=1)
            break;
        m/=(t);
        if(m==0){
            printf("FALSE");
            return 0;
        }
        printf("m %d\n",m);
        i++;
        
        
    }
    t=pow(10,(i));
    t/=10;
    m=n;
    
    for(j=1;j<=i;j++){
        x[j]=m/(t);
        m-=(t*x[j]);
        t/=10;
        
    }

    for(j=1;j<=i;j++){
        if(n%x[j]==0){
            check1=1;
        }
        else
            check2=1;
    }
}
    if(check1==1&&check2==0){
        printf("TRUE");
    }
    else
        printf("FALSE");

return 0;
}