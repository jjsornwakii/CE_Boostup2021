#include <stdio.h>
double M,d,N;
int m,n;
int main(){
    scanf("%d %d",&m,&n);
M = m;
N = n;
    while(M>0){
        M -= n;
        d = M * .05;
        M += d;
        if(M<=0){
            M = 0;
        }    
        printf("%.2lf\n",M);
    }

    return 0;
}