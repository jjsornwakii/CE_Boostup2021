#include <stdio.h>
int n,i;
int main(){
    scanf("%d",&n);
    int x[n];
    for(i = 0;i<n;i++){
        scanf("%d",&x[i]);
    }
    for(i=0;i<n-1;i++){
        for(int j=1;j<n;j++){
            if(x[i]>x[j]){
                int temp;
                temp = x[j];
                x[j] = x[i];
                x[i] = x[j];
            }
        }
    }
    printf("%d",x[n-1]-x[0]);
}