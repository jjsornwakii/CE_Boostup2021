#include <stdio.h>
#include <string.h>
int len,i,j,pos[100];
char str[100],c[]={'F','E','D','C','B','A'};
int main(){
    scanf("%s",str);
    len = strlen(str);
for(j=0;j<6;j++){
        printf("%c:",c[j]);
    for(i=0;i<len;i++){
        if(str[i]==c[j])
            printf("o");
        else
            printf("-");
    }
    printf("\n");


}
return 0;
}