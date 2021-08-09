#include <stdio.h>
#include <string.h>
char q1[111],q2[111];
int i,c=0;
int main(){
    for(i=0;i<100;i++){
    scanf("%c",&q1[c]);
    c++;
    }
    //printf("%d",c);
    c=0;
    for(i=0;i<100;i++){
    scanf("%c",&q2[c]);
    c++;
    }
    c=0;
    for(i=0;i<100;i++){
        if(strcmp(q1[i],q2[i])==0){
            c++;      
        }
    }
    printf("%d",c);
}