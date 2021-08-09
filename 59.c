#include <stdio.h>

int n,t,i,j,x[100];
int main(){
    scanf("%d %d",&n,&t);
    for(i=0;i<n;i++){
    scanf(" %d",&x[i]);
    }

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(x[i]+x[j]==t){
                break;
            }



        }
        if(x[i]+x[j]==t){
                break;
            }

    }
    printf("%d %d",i,j);

    return 0;
}