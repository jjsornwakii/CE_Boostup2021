#include "stdio.h"
#include "string.h"


int len;
char str[501],ch;
int main(){
    scanf("%[^\n]s",str);
    len = strlen(str);
    ch = str[0]; 
    for (int i = 0; i < len; i++){
        if(str[i]==ch){
            printf("%c",str[i]);
        }
       
        else{
            printf("\n");
            printf("%c",str[i]);
            ch = str[i];
        }

    }
    return 0;
    
}