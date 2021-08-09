#include <stdio.h>
#include <string.h>

char str[100],s,c;
int i,j,r,len;
int main(){
    scanf("%s ",str);
    scanf("%c %d",&s,&r);

    len = strlen(str);
    //printf("%c",s);
    if(s=='L'){
        for(i=0;i<r;i++){
            for(j=0;j<len;j++){
                
                if(j==0){
                    c = str[j];
                }
                else if(j>=1&&j<=len-1){
                    str[j-1]=str[j];
                    
                }
                if(j==len-1){
                    str[j]=c;
                }

            }
            

        }
        

    }
    ///////////////// ไปขวา
    else if(s=='R'){
        for(i=0;i<r;i++){
            for(j=len-1;j>=0;j--){
                
                if(j==len-1){
                    c = str[len-1];
                }
                else if(j>=0&&j<len-1){
                    str[j+1]=str[j];
                    
                }
                if(j==0){
                    str[j]=c;
                }

               // printf("%c\n",c);

            }
            

        }
        

    }

    for(j=0;j<len;j++)
            printf("%c",str[j]);

return 0;
}