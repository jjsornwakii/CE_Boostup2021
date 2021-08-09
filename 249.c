#include <stdio.h>
#include <string.h>
int len,i,j,c=0;
char str[100],strC[100];
int main(){
    scanf("%[^\n]s",str);
    scanf("%s",strC);
    len = strlen(str);

    for(i=0;i<len;i++){
        if(str[i]==32){
            printf("%c",strC[c]);
            c++;
        }
        else{
            printf("%c",str[i]);
        }




    }

return 0;
}