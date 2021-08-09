#include <stdio.h>
int x[20],a,b,c,i=0;

int main(){
    scanf("%d",&a);

    while(1){
        b = a / 2 ;
        c = a % 2 ;
        x[i] = c;
       
        a = b; 
      //  printf("%d\ni = %d\n",x[i],i);
        //printf("%d\n",a);
        if(a==0){
            break;
        }
        i++;
    }

    for(i=i;i>=0;i--)printf("%d",x[i]);
}