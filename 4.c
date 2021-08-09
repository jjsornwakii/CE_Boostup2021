#include <stdio.h>
int n,i,j,k,c;
int main(){
    scanf("%d",&n);
        for(j=0;j<n;j++){
            for(k=0;k<n-j-1;k++)
                printf(" ");
        
            for(i=0;i<=j;i++)
                printf("* ");
            
            printf("\n");
        }

        for(j=0;j<n;j++){
            for(k=0;k<=j;k++)
                printf(" ");

            for(i=n-k;i>0;i--)
                printf("* ");

            printf("\n");
        }
    return 0;
}