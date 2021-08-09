#include <stdio.h>

int n,i,j;
int main(){
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i!=1){
            for(j=n;j>=n-i+2;j--)
            printf(" ");
        }
        printf("\\");
        if(i==n)
        printf("n");
        printf("\n");
        
    }
    return 0;
}