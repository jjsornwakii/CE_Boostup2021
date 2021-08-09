#include <stdio.h>
int N,a,s=0;
int main(){
    scanf("%d",&N);
    
    for(int i =1;i<N;i++){
        if(N%i==0){
            s+=i;
        }
    }
    printf("%d",s);
}