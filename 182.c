#include <stdio.h>
int f=1;
int n;
char c;

int fac(int x){
    f*=x;

    if(x==1){
        printf("%d",f);
        return 0;
    }
    fac(x-1);

}

int main(){
    scanf("%d%[^\n]c",&n,&c);
    //printf("c == %d\n",c);
    if(c==0){
    if(n==0)
    printf("%d",f);

    else if(n>0&&n<=20)
    fac(n);
    
    else
    printf("Error");

    }
    else
    printf("Error");
}