#include <stdio.h>
int n,i,j,k,l,d;
int main(){
    scanf("%d",&n);
    
if(n>0){
    for(i=1;i<=n+1;i++){
        for(j=i;j>1;j--){
            printf(" ");

            if(j==1)
                break;
        }
        printf("*");

        for(k=1;k<=n+1-i;k++){
            printf(" ");
        }

        for(l=1;l<=n-i;l++){
            printf(" ");
        }
        if(i!=n+1)
        printf("*\n");

        
    }
        printf("\n");
/////////////////////// ด้านล้าง
    for(i=1;i<=n;i++){
        
        for(j=1;j<=n-i;j++){
            printf(" ");
            
        }
        

        printf("*");

        for(k=1;k<=i;k++){
            printf(" ");
        }

        for(d=1;d<i;d++){
            printf(" ");
        }
        printf("*");



        printf("\n");

    }
}
else
    printf("Error");

return 0;
}