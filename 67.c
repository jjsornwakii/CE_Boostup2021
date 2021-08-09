#include <stdio.h>
int x[20],a,b,c,i=0,n;

int main(){
    scanf("%d %d",&a,&n);

    while(1){
        b = a / 2 ;
        c = a % 2 ;
        x[i] = c;
       
        a = b; 
        if(a<=0){
            break;
        }
        i++;
    }

    for(i=i+(n-i-1);i>=0;i--){
        if(x[i]<0){
            x[i]*=(-1);
        }
      printf("%d",x[i]);
    
    }
}