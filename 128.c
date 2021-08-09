#include <stdio.h>
#include <string.h>

char str[100],cMax=0;
int i,j,k,len;
int main(){
    scanf("%[^\n]s",str);
    len= strlen(str);

    for(i=0;i<len;i++){
        if(str[i]>cMax)
            cMax = str[i];

    }


    printf("%c",cMax);

    
}