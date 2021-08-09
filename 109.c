#include <stdio.h>
#include <ctype.h>
#include <string.h>

char str[201];
int i,len;
int main(){
    scanf("%[^\n]s",str);
    len = strlen(str);
    for(i=0;i<len;i++){
        if(str[i]>=65&&str[i]<=90)
        str[i] = tolower(str[i]);

        else if(str[i]>=97&&str[i]<=122)
        str[i] = toupper(str[i]);

        printf("%c",str[i]);
    }
    return 0;
}