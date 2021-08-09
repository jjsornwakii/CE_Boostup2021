#include <stdio.h>

int x,y,mod,d;
int main(){
    scanf("%d %d",&x,&y);

    while(1){
        if(y>x){
            int t;
            t = y;
            y = x;
            x = t;
        }

        printf("%d = ",x);
        d = x/y;
        x -= (y*d);
        if(x!=0)
        printf("%d*%d+%d\n",d,y,x);
        else
        printf("%d*%d\n",d,y);
        
        if(x==0)
            break;
    }
    printf("%d",y);
    return 0;
}