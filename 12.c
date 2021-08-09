#include "stdio.h"
int n,i,j;
int main(){
    scanf("%d",&n);
    if(n>1){
    for(i=1;i<=n;i++){

        if(i==1)
        printf("/");

        else if(i==n)
        printf("\\");
        
        else
        printf("-");
    }
    printf("\n");
    if(n>2){
    for(j=1;j<=n-2;j++){
        for(i=1;i<=n;i++){

            if(i==1)
                printf("|");

            else if(i==n)
                printf("|");
        
            else
                printf(" ");

        
        }
        printf("\n");
    }
    }
    for(i=1;i<=n;i++){

        if(i==1)
        printf("\\");

        else if(i==n)
        printf("/");
        
        else
        printf("-");
    }
    for(i=1;i<=n;i++){
        printf("n");
    }
    }
    else
        printf("ERROR");
}