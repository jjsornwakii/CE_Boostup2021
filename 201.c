#include <stdio.h>

int i,j,k,x[100][100];

int main(){
    for(i=0;i<4;i++){
        for(i=0;i<6;i++){
            scanf(" %d",&x[i][j]);
        }
    }
    printf("\n\n");
    for(i=0;i<4;i++){
        for(i=0;i<6;i++){
            printf("%d ",x[i][j]);
        }
        printf("\n");
    }
}