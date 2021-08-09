#include <stdio.h>
int i,j,k,r,len,n,x[100],c;
int main(){
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf(" %d",&x[i]);
    }
    scanf("%d",&r);
    //printf("%d",i);
    len = n;
    
        for(i=0;i<r;i++){
            for(j=0;j<len;j++){
                
                if(j==0){
                    c = x[j];
                }
                else if(j>=1&&j<=len-1){
                    x[j-1]=x[j];
                    
                }
                if(j==len-1){
                    x[j]=c;
                }

            }
            

        }

    for(j=0;j<len;j++)
            printf("%d ",x[j]);

return 0;
}