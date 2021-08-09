#include <stdio.h>
int h[100];
int n,i,j;
int main(){
    scanf("%d",&n);
    
    for(j=0;j<n;j++)
        scanf("%d",&h[j]);
    
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(h[j]>h[j+1]){
                int temp;
                temp = h[j];
                h[j] = h[j+1];
                h[j+1] = temp;
            }
        }
    }

    for(i=n-1;i>=n-2;i--)
    printf("%d\n",h[i]);
}