#include <stdio.h>
#include <string.h>
char num[11];
int len,i,j,k;
int main(){
    scanf("%s",&num);
    len = strlen(num);
        
            for(k=0;k<len;k++){
                if(num[k]==49||num[k]==52)
                    printf("   ");
                else if(num[k]!=52){
                    printf(" _ ");
                }
        
            }
            
            printf("\n");
        
        
            ///////////////////////
        

            

                
            for(k=0;k<len;k++){
                if(num[k]==49||num[k]==55){
                    printf("  |");
                }
                else if(num[k]==50||num[k]==51)
                    printf(" _|");

                else if(num[k]==53||num[k]==54)
                    printf("|_ ");

                else if(num[k]==48)
                    printf("| |");
                
                else
                    printf("|_|");

            }

            
        printf("\n");
        
        
        ///////////////////////////
        

           

                
             for(k=0;k<len;k++){
                if(num[k]==49||num[k]==52||num[k]==55){
                    printf("  |");
                }
                else if(num[k]==51||num[k]==53||num[k]==57)
                    printf(" _|");

                else if(num[k]==50)
                    printf("|_ ");

                else
                    printf("|_|");

            }

            



        


    }
