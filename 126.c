#include <stdio.h>
#include <string.h>
int len,i,c[5];
char str[100];
int main(){
    scanf("%[^\n]s",str);

c[0]=0;
c[1]=0;
c[2]=0;
c[3]=1;

    len = strlen(str);
    for(i=0;i<len;i++){
        if(str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u')
                c[1]++;
        else if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122))
                c[0]++;
        else if((str[i]>=48&&str[i]<=57))
                c[2]++;
        else if(str[i]>=32)
                c[3]++;
    }

    printf("Alphabet = %d\n",c[0]);
    printf("Vowel = %d\n",c[1]);
    printf("Number = %d\n",c[2]);
    printf("Word = %d\n",c[3]);
}