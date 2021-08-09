#include <stdio.h>
#include <string.h>

int i,j,k=0,l=0,ch=0;
char str[100];

int main(){
    scanf("%[^\n]s",str);
    int len = strlen(str);
    for(i=0;i<len;i++){
        if(str[i]=='Y'||str[i]=='y'){
            if(str[i+1]=='A'||str[i+1]=='a'){
                if(str[i+2]=='Y'||str[i+3]=='y'){
                    if(str[i+2]=='Y'||str[i+3]=='y'){

                        k++;
            if(ch==0){
                l = i;
                ch=1;
            }
            }
            }
            }
        }
    }
    printf("%d %d",l,k);
    return 0;
}