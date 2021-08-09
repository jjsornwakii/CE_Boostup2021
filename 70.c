#include <stdio.h>
int m,n,i,j,A[101][101];
int main(){
    scanf("%d %d",&m,&n);

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d",A[j][i]);
            printf(" ");

            if(j==m-1)
                printf("\n");

            
        }
    }
}