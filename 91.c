#include <stdio.h>
int n,i,j,k,c;
int main(){
    scanf("%d",&n);
    
  if(n>=1){
        for(j=0;j<n;j++){
            for(k=0;k<n-j-1;k++)
                printf(" ");
        
        
            for(i=0;i<(j*2)+1;i++){
                if(i==0||i==(j*2))
                printf("*");
                else
                printf(" ");
            
            }
        
            printf("\n");
        }
        
            /////////////////////////////////
        for(j=0;j<n;j++){
            for(k=0;k<=j;k++)
                printf(" ");

            for(i=((n-k)*2)-1;i>=1;i--){

                if(i==-1+(n-k)*2||i==1)
                printf("*");
                else
                printf(" ");
            }
            printf("\n");
        }
    }
        else
        printf("Error");
    return 0;
}