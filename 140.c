#include <stdio.h>
#include <string.h>

char str[101],strc;
int len,i,j=0;
int main(){
    scanf("%s %[^\n]c",str,&strc);
    len = strlen(str);
    if(strc==0){
    for(i=0;i<len;i++){
        if(str[i]!=str[i+1])
            printf("%c",str[i]);
    }
    }
    else
        printf("ERROR");
}