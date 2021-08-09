#include "stdio.h"

int i=0,sumO=0,sumE=0,num=0;
int main(){

    do{
        scanf("%d",&num);
       

        if(num%2==0){
            sumE+=num;
        }
        else
            sumO+=num;
   
    }while(num!=0);
    
    printf("%d\n%d",sumO,sumE);
	
	 return 0;

}