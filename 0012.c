#include "stdio.h"
#include "string.h"
char str[16];
int len;
    int main(){
        gets(str);
        len=strlen(str);

        for(int i=1;i<=len;i++){
            
            if(i%3==0){
                printf("..*.");
                if(i==len)
                printf(".");
            }
            else{
                printf("..#.");
                if(i==len)
                printf("."); 
            }
        }
        ///////////////////////////////////////////////// 1
        printf("\n");
        for(int i=1;i<=len;i++){
            if(i%3==0){
                printf(".*.*");
                if(i==len)
                printf(".");
            }
            else{
                printf(".#.#");
                if(i==len)
                printf(".");
            }
        }
        ////////////////////////////////////////////////// 2
        printf("\n");
        for(int i=1;i<=len;i++){
            if(i%3==0){
                printf("*.%c.",str[i-1]);
                if(i==len)
                printf("*");
            }
            else{
                if((i-1)%3==0&&i!=1){
                    printf("*.%c.",str[i-1]);
                }
                else{
                printf("#.%c.",str[i-1]);
                }
                if(i==len)
                printf("#");
            }
        }
        ////////////////////////////////////////////////// 3
        printf("\n");
        for(int i=1;i<=len;i++){
            if(i%3==0){
                printf(".*.*");
                if(i==len)
                printf(".");
            }
            else{
                printf(".#.#");
                if(i==len)
                printf(".");
            }
        }
        ///////////////////////////////////////////////// 4
        printf("\n");
        for(int i=1;i<=len;i++){
            
            if(i%3==0){
                printf("..*.");
                if(i==len)
                printf(".");
            }
            else{
                printf("..#.");
                if(i==len)
                printf("."); 
            }
        }
        return 0;
    }
