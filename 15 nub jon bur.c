#include "stdio.h"
int n,x[50],i=0,j,num[11];
int main(){
    
    while (1)
    {
        i++;
        scanf("%d",&x[i]);
        n=i;

        if(x[i]<0||x[i]>9)
            break;
    }
    
        
    
    
    //printf("n = = %d\n",n);
        for(j=0;j<10;j++){
            for(i=1;i<n;i++){
              if(x[i]==j){
                num[j]++;
             }
             
            }
        
        }

    for(i=0;i<=9; i++)
    {
        printf("%d = %d\n",i,num[i]);
    }
    
    return 0 ;
}