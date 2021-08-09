#include <stdio.h>
int a,b,c,i=1,count=1;
int main(){
    scanf("%d %d",&a,&b);
    c = a+b;
    while(1){



       // printf("c = %d i = %d\n",count,i);
        count++;
        
        if(c/(i)==0)
            break;

        i*=10;
    }

    printf("%d",count-2);

}