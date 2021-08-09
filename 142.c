#include <stdio.h>
#include <string.h>

char str[101],strc;
int len,i,j=0;
int main(){
    scanf("%s",str);
    len = strlen(str);
    
    for(i=1;i<=len;i++){
        printf("%c",str[i-1]);
        if(str[i]==str[i-1]){
            if(i!=len)
                printf("*"); 
            
            

            
        }
         
    }
    
    
}