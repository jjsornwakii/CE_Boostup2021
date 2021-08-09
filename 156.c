#include <stdio.h>

int n,i,j,k;
int main(){
    scanf("%d",&n);
    for(i=n;i>0;i--){

        if(i!=n){
        for(k=1;k<=n-i;k++){
            printf(" ");
        }
        }
        for(j=i;j>0;j--){
            printf("*");
        }
        printf("\n");
        
    }
    
}