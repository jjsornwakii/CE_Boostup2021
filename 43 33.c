#include <stdio.h>
#include <string.h>
char str[100],s[5],sC[]="stop",x[100];
int i=0,j,len,xnum[100];
int main(){
    scanf("%s",str);
    len = strlen(str);
    i=0;
    while (1)
    {
        scanf("%c%[^\n]s",&x[i],s);
        
        i++;
        
        if(strcmp(sC,s)==0){
            break;
        }
        
        
    }
    printf("%c %c %c\n",x[0],x[1],x[2]);
    int k=0;

    for(j=0;j<len;j++){
        //printf("| J = %d K = %d |",j,x[k]);
        if(j!=x[k]){
            
            printf("%c\n",str[j]);
        }
        else 
            k++;
        
        
    }
}
