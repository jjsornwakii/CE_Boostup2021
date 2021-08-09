#include <stdio.h>
#include <string.h>

char num[100];
int i,j,k,len;
int main(){
    scanf("%s",num);
    len = strlen(num);

    for(i=0;i<len;i++){
        printf("%d",num[i]);
    }

return 0;
}