#include <stdio.h>
#include <string.h>
char str[100];
int len,i;
int main(){
    scanf("%[^\n]s",str);
    len = strlen(str);

    for(i=0;i<len;i++){
        if(i!=0&&i%10==0)
            printf("\n");

        printf("%c",str[i]);
    }
}