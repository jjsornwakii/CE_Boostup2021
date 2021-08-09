#include <stdio.h>
#include <string.h>
int len;
char str[101],s[]="ping ";
int main(){
    scanf("%[^\n]s",str);
    len = strlen(str);
  //  printf("%d",len);
  //  printf("%s\n",s);
  //  printf("%s\n",str);
    printf("%d",strcmp(s,str));
    if(len<=100){
        if(strcmp("ping",str)==0){
            printf("CUTE-3-");
        }
        else
            printf("NOT CUTE");
    }
    else
        printf("ERROR");

    return 0;
}