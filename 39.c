#include <stdio.h>
#include <string.h>

char str[100];
int i,j,k,len;

int main(){
    scanf("%[^\n]s",str);
    len = strlen(str);

    for(i=0;i<len;i++){

        if((str[i+1]>=48&&str[i+1]<=57)){ /////////////เช็คว่าเป็นเลขไหม
           
            if(str[i]<48||str[i]>57){
                
                for(j=48;j<=str[i+1];j++)
                    printf("%c",str[i]);
            }


        }
        
    }
    return 0;
}