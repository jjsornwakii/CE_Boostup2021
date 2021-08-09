#include <stdio.h>
int n,i,j,k,x[100],max=0;
int main(){
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf(" %d",&x[i]);
    }

  
        for(j=0;j<n-1;j++){
            if(x[j+1]-x[j]>=max)
                max = (x[j+1]-x[j]);
        }

        printf("%d",max);
    
    return 0;
}