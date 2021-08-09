#include <stdio.h>
#include <string.h>

char str[101];
int len,i,j;
int main(){
    scanf("%s",str);
    len = strlen(str);
    for(i=0;i<len;i++){

        if(str[i]+17>90){
            printf("%c",65+((str[i]+17)-91));
        }
        else
        printf("%c",str[i]+17);
    }

}