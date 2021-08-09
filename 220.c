#include <stdio.h>

int n,i,j,k;
int main(){
    scanf("%d",&n);

    for(i=1;i<=n+2;i++){
        for(k=1;k<=n+1;k++)
            printf(" ");

        printf("x\n");
    }

    for(i=1;i<=n+1;i++){

        for(j=1;j<=n-i+1;j++)
            printf(" ");

        printf("x");

        for(j=1;j<i;j++)
            printf(" ");

        printf("x");

        for(k=1;k<i;k++)
            printf(" ");


        printf("x\n");
    }
    return 0;
}