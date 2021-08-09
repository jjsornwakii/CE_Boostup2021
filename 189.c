#include <stdio.h>
#include <string.h>
char str[100];
int i,len;
int main(){
    scanf("%[^\n]s",str);
    len = strlen(str);
    printf("%d\n",len);
    for(i=0;i<len/2;i++){
        char temp;
        temp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = temp;
        }
       for(i=0;i<len;i++){
        printf("%c",str[i]);
        } 
    return 0;
}