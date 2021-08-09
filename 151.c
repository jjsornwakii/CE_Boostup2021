#include <stdio.h>
#include <string.h>
char n[11],j[11],b[11];
int i,len[4],max=0,c1=0,c2=0,c3=0;
int main(){
    scanf("%s",n);
    scanf("%s",j);
    scanf("%s",b);
    len[1] = strlen(n);
    len[2] = strlen(j);
    len[3] = strlen(b);
if(len[1]<11&&len[2]<11&&len[3]<11){
    for(i=1;i<=3;i++){
        if(len[i]>max)
            max = len[i];
        
    }
    if(len[1]==max){
        c1=1;
    }
    if(len[2]==max){
        c2=1;
    }
    if(len[3]==max){
        c3=1;
    }

        if(c1==1&&c2==0&&c3==0)
        printf("Noon is crazy");

        else if(c1==0&&c2==1&&c3==0)
        printf("๋Jane is crazy");

        else if(c1==0&&c2==0&&c3==1)
        printf("Bow is crazy");

        else if(c1==1&&c2==1&&c3==0)
        printf("Noon and Jane are crazy");

        else if(c1==1&&c2==0&&c3==1)
        printf("Noon and Bow are crazy");

        else if(c1==0&&c2==1&&c3==1)
        printf("Jane and Bow are crazy");

        else
        printf("They are crazy");
    }
    else
        printf("ERROR");
}