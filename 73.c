#include <stdio.h>
#include <string.h>
char str[100];
int len,i;

int main(){
    scanf("%[^\n]s",str);
    len = strlen(str);

    for(i=0;i<len;i++){
        if((str[i]==32)||((str[i]<=90&&str[i]>=65)||(str[i]<=122&&str[i]>=97))||((str[i]<=57&&str[i]>=48)))
            printf("%c",str[i]);
    }
    return 0;
}