#include<stdio.h>  
int main()    
{    
 int i,fact=1,number;     
  scanf("%d",&number);  

if(number>=0){
    for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
  printf("%d",fact);    

}
else
    printf("Error");
return 0;  
}   