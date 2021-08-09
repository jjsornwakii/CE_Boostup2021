#include <stdio.h>
int x[3][11],i,j,k;
int main(){
    for(i=1;i<=2;i++){
        for(j=1;j<=10;j++){
            scanf("%d",&x[i][j]);
        }
    }

    for(i=1;i<=10;i++){
        for(j=1;j<=10;j++){
        
                if(x[1][i]==x[2][j]){
                    printf("%d\n",x[1][i]);
                }
        }
    }
    return 0;
}