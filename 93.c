#include <stdio.h>


int k,i,j,K,x[100],s=0;
int main(){
    scanf("%d",&K);

    for(i=0;i<K;i++)
        scanf("%d",&x[i]);

    for(i=0;i<K;i++){
        for(k=1;k<=x[i]/2;k++){
            if(x[i]%k==0){
                s+=k;
            }
        }
        if(s==x[i]){
            printf("P");
        }
        else if(s<x[i])
            printf("D");

        else
            printf("A");

        printf("\n");
        s=0;
    }
}