#include <stdio.h>

int x[11],j,i,c=0;
int main(){
    for(i=1;i<=10;i++)
        scanf("%d",&x[i]);
    


    for(i=1;i<=i-j;i++){
        if(x[i]%2==0){
            for(j=i+1;j<=10;j++){
                if(x[j]%2==0){
                    for(int k=i+1;k<=j;k++)
                        printf("%d ",x[k]);

                }

                
            }
        }

    }

    
}