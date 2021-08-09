#include <stdio.h>

int i,j,x[6],f,c=1;
int main(){

    for(i=0;i<5;i++)
    scanf(" %d",&x[i]);

    f = x[0];

    for(j=1;j<5;j++){
        if(f<x[j]){
            c++;
            f=x[j];
        }
    }
    printf("%d",c);

return 0;
}