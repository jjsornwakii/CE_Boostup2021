#include <stdio.h>

char c;
int m,k;
int main(){
    scanf("%d %d %c",&m,&k,&c);

    if((k==15||k==8||k==14)&&c=='W')
        printf("Wan Pra Yai");
    else
        printf("Normal Day");

    return 0;
}