#include <stdio.h>
int x,y,z,d=0,i=0;
int main(){
    scanf("%d %d %d",&x,&y,&z);
    
if(((x>=0)&&(y>=0)&&(z>=0))&&(((y<=z)&&(y>=x))||(y>z))){
    while(1){
        d += y;
        i++;
        if(d>=x){
            break;
        }
        d -= z;
        
    }

    printf("%d",i);
}
else
  printf("Error");
}

