#include <stdio.h>


int x[100],i=0,j,k,c1=0,c2=0;
int main(){

    while(1){
    scanf(" %d",&x[i]);

    if(x[i]==0)
        break;

    i++;
    
    }
    

    
        for(k=0;k<i-1;k++){
            if(x[k]<x[k+1])
                c1=1;

            if(x[k]>x[k+1])
                c2=1;
        }
    
    if(c1==1&&c2==0)
        printf("Ascending Sort Order");

    else if(c1==0&&c2==1)
        printf("Descending Sort Order");
    
    else
        printf("Unsorted Order");

    return 0;
}