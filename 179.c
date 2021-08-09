#include <stdio.h>
int a,b,d,j=1,i;
int main(){
    scanf("%d %d %d",&a,&b,&d);
   // printf("%d %d %d\n",a,b,d);
   
   if(a>b){
       int t;
       t =a;
       a = b;
       b = t;
   }
    

   if(b>=a&&d>0){
    for(i = a;i<=b;i++){
       // printf("%d + %d = %d\n",a,(j-1)*d,a+(j-1)*d);
       if(i==a+(j-1)*d){
           printf("%d\n",i);
           j++;
       }
       
        
    }
        if(i<a+(j-1)*d)
            printf("%d",b); 
   }
   else
    printf("Go to hell");

    return 0 ;
}