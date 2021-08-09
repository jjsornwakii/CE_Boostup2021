#include <stdio.h>
int h,w,i,j;
int main(){
    scanf("%d %d",&h,&w);
if(h>0&&w>0){
    for(i=1;i<=2+h;i++){
        if(i==1){ //////////บรรทัด 1
            printf(" ");
            for(j=1;j<=w;j++){
                printf("_");
            }
            printf(" \n");
        }
        
        else if(i<=h+1&&i>=2){
        for(j=1;j<=w+2;j++){
            if(j==1)
                printf("|");

            
            else if(j==w+2){
                
                printf("|\n");
            }
            else{
                if(i==h+1){
                    for(int k=1;k<=w;k++)
                    printf("_");
                    break;
                    }
                else
                printf(" ");
            }
            
        }
        
        }
        
    }
   
    printf("|");
    }
     else{
      printf("error");
    }
}