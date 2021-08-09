#include <stdio.h>
int n,r=0;
int main(){
    scanf("%d",&n);
    int even[n];
    for(int i=0;i<n;i++){
        scanf("%d",&even[i]);
        if(even[i]%2!=0)
            r++;
        
    }
    printf("%d",r);
}