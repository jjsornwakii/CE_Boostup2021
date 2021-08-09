#include <stdio.h>
int n,i,j,k,c;
int main(){
    scanf("%d",&n);
        for(j=0;j<n;j++){
            for(k=0;k<n-j-1;k++){
                printf(" ");
            }
            for(c=0;c<2+(j*2)-1;c++){
                printf("*");
            }
            printf("\n");
        }
    return 0;
}