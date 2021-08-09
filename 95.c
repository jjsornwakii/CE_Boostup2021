#include <stdio.h>
#include <string.h>
int len,i,j,k,c[9],min=1000000;
char str[100];
int main(){


    scanf("%s",&str);
    len =strlen(str);

    for(i=0;i<len;i++){
        if(str[i]=='c')
            c[0]++;
        else if(str[i]=='e')
            c[1]++;
        else if(str[i]=='b')
            c[2]++;
        else if(str[i]=='o')
            c[3]++;
        else if(str[i]=='s')
            c[4]++;
        else if(str[i]=='t')
            c[5]++;
        else if(str[i]=='u')
            c[6]++;
        else if(str[i]=='p')
            c[7]++;
     
    }
        c[3]/=2;

    for(i=0;i<8;i++){
        if(min>c[i])
            min = c[i];
    }

    printf("%d",min);
return 0;
}