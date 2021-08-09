#include <stdio.h>
#include <string.h>
char str[100];
int i=0,c1=0;
int main(){
    scanf("%[^\n]s",str);
    int len = strlen(str);
    for(int i=0;i<len/2;i++){


        if(str[i]==str[len-1-i]||len==1){
            c1=1;
        }
        else{
            c1=0;
            break;
        }
    }

    if(c1==0)
        printf("Not Palindrome");
    else
        printf("Palindrome");

    return 0;

}