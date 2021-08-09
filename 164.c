#include <stdio.h>
#include <string.h>

int n,i,j,k,c,d=65,e;
int main(){
    scanf("%d",&n);

    
        for(j=1;j<=n;j++){



            for(k=1;k<=n-j;k++){
                printf(" ");
            }


            for(c=1;c<=j;c++){
                printf("%c",d);

                if(c==j){
                    d++;
                    break;
                }
                printf(" ");
            }
            printf("\n");

            




        }


    
}