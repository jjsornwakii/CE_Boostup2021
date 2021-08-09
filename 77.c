#include <stdio.h>
double y;
int x;
char c;
int main(){
    scanf("%lf",&y);
    x = y;
if(y-(double)x==0){

    if(x%2==0){
        printf("even");
    }
   else if(x%2!=0)
        printf("odd");
    
  
}
else
      printf("Error");
    return 0;
}