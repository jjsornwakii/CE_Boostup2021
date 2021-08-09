#include <stdio.h>
#include <string.h>

char str[101],strc;
int len,i,j=0,c1=0,c2=0;
int main(){
    scanf("%[^\n]s",str);
    len = strlen(str);

    for(i=0;i<len;i++){
        if(str[i]>=65&&str[i]<=90)
            c1++;
        else if(str[i]>=90&&str[i]<=122)
            c2++;
    }
    printf("Capital letter = %d\n",c1);
    printf("Lower-case letter = %d",c2);
    return 0;
}