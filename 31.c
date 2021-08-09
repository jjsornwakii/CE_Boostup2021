#include <stdio.h>
#include <string.h>

char line[100];
int i=0,j,k,w=0,len;
int main(){

    scanf("%s",line);
    len = strlen(line);

    while(i!=len-1){
        if(line[i+2]!='x'){
            w++;
            i+=2;
        }
    
        else if(line[i+2]=='x'&&line[i+1]=='x'){
            printf("0");
            return 0;
        }
        else{
            w++;
            i+=1;
        }
    }

    printf("%d",w);
    return 0;
}