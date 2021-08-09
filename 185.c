#include <stdio.h>
int n,i,j,x[30];
int main(){
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&x[i]);
    }
    for(i=1;i<=n;i++){
        for(j=1;j<n;j++){
            int temp;
            if(x[j]>x[j+1]){
                temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
            }
        }
    }
    printf("%d",((x[n])-1)*((x[n-1])-1));

    return 0;
}