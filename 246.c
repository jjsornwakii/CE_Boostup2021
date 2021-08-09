#include<stdio.h>
#include <string.h>

char id[15],name[15],cat[15];
int len[5],j,i;
int main() 
{
    
    //printf("%d",len);
    scanf("%s ",id);
    scanf("%[^\n]s",name);
    scanf("%s",cat);
	len[0] = 0;
    len[1] = strlen(id)+3;
    len[2] = strlen(name)+5;
    len[3] = strlen(cat)+9;
	len[5] = 0;
    printf("++++++++++++++++++++++++++++++++++++++++\n"); // 40 ???
   
    for(j = 0;j<5;j++){
        for (i = 1; i <= 40-(len[j]); i++){
            if(i==1)
                printf("+");
            
            else if(i==40-(len[j]))
                printf("+\n");
            
            else if(i==15&&j==1){
                printf("id: ");
                printf("%s",id);
            }
            else if(i==13&&j==2){
                printf("NAME: ");
                printf("%s",name);
            }
            else if(i==9&&j==3){
                printf("category: ");
                printf("%s",cat);
            }
            else
                printf(" ");
            
        }
    }
    
    printf("++++++++++++++++++++++++++++++++++++++++\n"); // 40 ???
  return 0;
}