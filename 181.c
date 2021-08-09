#include <stdio.h>

int a,b,c,s,i=0;
int main(){
    scanf("%d %d %d",&a,&b,&c);

    while(s<a){
        s+=(b);
          i++;
    
        if(s>=a)
          break;
        s-=c;
    }
    printf("%d",i);
}