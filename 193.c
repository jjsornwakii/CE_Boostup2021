#include <stdio.h>
#include <string.h>

int i,j,k,len;
char str[100];
int main(){
    scanf("%s",str);
    len =strlen(str);

    for(i=0;i<len;i++){
        if(str[i]>=48&&str[i]<=57)
            printf("%c",str[i]);
    }
    printf("\n");
    for(i=0;i<len;i++){
        if(str[i]>=65&&str[i]<=90)
            printf("%c",str[i]);
    }
    printf("\n");
    for(i=0;i<len;i++){
        if(str[i]>=97&&str[i]<=122)
            printf("%c",str[i]);
    }


    return 0;
}