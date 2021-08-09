#include <stdio.h>

int n,i,j=0,k=0,nq,sum=0;
int main(){
    scanf("%d",&n);
    int c[n+1];
    for(i=0;i<n;i++)
        scanf("%d",&c[i]);

    scanf("%d",&nq);
    int q[nq+1];
    for(i=0;i<nq;i++){
        scanf("%d",&q[i]);

   // printf("%d %d\n",q[0],q[1]);
    }

    for(i=0;i<n;i++){
        sum+=c[i];
      //  printf("I %d\n",i);
      //  printf("SUM %d\n",sum);
        if(sum>=q[j]){
            //printf("SUM %d > %d\n",sum,q[j]);
            printf("%d# Target achieved at day %d!\n",j+1,i+1);
            j++;
            i=-1;
            k=1;
            
            sum=0;
        }

        if(i==n-1){
            if(j>nq-1){
                break;
            }
            printf("%d# Target failed to achieve.\n",j+1);
            j++;
            i=-1;
            k=0;
            sum=0;

            
        }



    }
    
    return 0;
    
}