#include "stdio.h"
#include "string.h"

char str[100],st[6],st1[]="stop";
int n,i,Scheck=0;
int main(){
    scanf("%s",str);
    

    
        scanf("%d%[^\n]*%s",&n,st);
        printf("n = %d\n",n);
        printf("st= %s\nst1 = %s",st,st1);
        Scheck = strcmp(st,st1);
        printf("\nsCh %d",Scheck);

        
    
    
}