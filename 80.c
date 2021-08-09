#include <stdio.h>
#include <string.h>
int len,i,j,c=0;
char str[100],strC[100],c1[]="node",c2[]="-v";
int main(){
    scanf("%s",str);
    scanf("%s",strC);
    len = strlen(str);

    if(strcmp(str,c1)!=0||strcmp(strC,c2)!=0)
        printf("FALSE");
    
    else
        printf("TRUE");

return 0;
}