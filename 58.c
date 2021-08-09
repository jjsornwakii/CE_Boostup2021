#include <stdio.h>

char K;
int n,i,p=0;
int main(){
    scanf("%d",&n);
   
    for(i=0;i<n;i++){

        scanf(" %c",&K);

        if(K=='e'){
            p-=1;
            if(p<0)
                p = 0;
            
        }
        else if(K=='r'){
            p+=1;
        }
       // printf("%d\n",p);
    }

    printf("%d",p);
    return 0;
}