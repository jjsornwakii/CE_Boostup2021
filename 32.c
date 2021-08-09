#include <stdio.h>
#include <string.h>
char num[100];

int i,s=1,len,n;
int k = 3;
int main(){
    scanf("%s",num);

    len = strlen(num);

    for(i=0;i<len;i++){
        s*=(num[i]-48);
    }
    printf("%d",s);
}