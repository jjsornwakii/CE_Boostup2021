#include <stdio.h>

int a,b,i,j;
int main(){
    scanf("%d %d",&a,&b);
    if(a>0&&b>0){
        for(i=1;i<=a;i++){
            for(j=1;j<=b;j++){
                if(i%2!=0){
                    if(j%2!=0){
                        printf("x");
                    }
                    else
                        printf("o");
                }
                else{
                    if(j%2!=0){
                        printf("o");
                    }
                    else
                        printf("x");

                
                }
                
            }
            printf("\n");
        }
    }
    else
        printf("ERROR");
        return 0;
}