#include <stdio.h>

int n,i,j,k;
int main(){
    scanf("%d",&n);

    for(i=0;i<n;i++){

            for(k=0;k<i;k++)
                printf(" ");

            for(j=0;j<(n-i)*2;j++){
                printf("-");
            
                if(j==((n-i)*2)-1)
                    printf("/\n");
            }
    }
    ///////////////
    for(i=0;i<=n;i++){

            for(k=0;k<n-i;k++){
                printf(" ");
            }

            printf("/");

            for(j=0;j<(i)*2;j++){
                printf("-");     
            }
            printf("\n");
            

    }
    return 0;
}