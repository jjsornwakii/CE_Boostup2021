#include <stdio.h>
#include <ctype.h>
#include <string.h>
int len,i;
char str[100];
int main(){
    scanf("%[^\n]s",str);
    len = strlen(str);

    for(i=0;i<len;i++){
        printf("%c",toupper(str[i]));
    }

}