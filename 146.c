#include <stdio.h>
#include <string.h>

char c[100];
int n,x=0,y=0,i;
int main(){
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf(" %c",&c[i]);
        if(c[i]=='S'){
            x+=200;
            y+=100;
        }
        if(c[i]=='I'){
            x-=211;
            y-=59;
        }
        if(c[i]=='A'){
            y+=420;
        }
        if(c[i]=='O'){
            y+=0;
            x+=0;
        }

        if(x<-2000||x>2000||y<-2000||y>2000){
            printf("I'm dead");
            return 0;
        }
    }

    if(x>-2000&&x<2000&&y>-2000&&y<2000){
        printf("%d %d",x,y);
    }

return 0;
}