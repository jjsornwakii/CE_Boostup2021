#include <stdio.h>
#include <string.h>

char str[101];
int len,i,j=0;
int main(){
    scanf("%[^\n]s",str);
    len = strlen(str);
    for(i=0;i<len;i++){
        if((str[i]=='C'||str[i]=='c')){
          // printf("CCCCC%d\n",i);
          i++;
           if((str[i]=='A'||str[i]=='a')){
                //printf("AAAAA%d\n",i);
                i++;
                if((str[i]=='T'||str[i]=='t')){
                j++;
            
            }
            i--;
           
            
        }
        i--;
    }
    }
    printf("%d",j);
}