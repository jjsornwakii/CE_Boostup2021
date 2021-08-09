#include "stdio.h"
#include "string.h"

float n,d,x;
int len,checkInt =0,checkF=0,checkS=0;
char c[100];
int main(){
    
    scanf("%s",c);
    
    len = strlen(c);
    //printf("%d",len);
    for(int i = 0; i<len;i++){
        
        if(c[i]=='.'){
            for(int j = i+1; j<len; j++){
                if(c[j]!='0')
                    checkF=1;
            }
        
        //printf("F");
        }
        else if((c[i]>='0'&& c[i]<='9')||c[0]=='-'){
        checkInt = 1;
        //printf("I");
        }
        else{
        checkS = 1;
        //printf("S");
        }

    }
    if(checkInt==1&&checkF==0&&checkS==0){
        printf("INTRGER !!!");
    }
    else if(checkF==1&&checkS==0){
        printf("FLOAT !!!!");
    }
    else
        printf("STRING !!!!!");

    return 0;
} 