#include <stdio.h>
int x[20],a,b,c,i=0,j=0,k,hex[100];

int main(){
    scanf("%d",&a);
 k=a;
    while(1){
        b = a / 8 ;
        c = a % 8 ;
        x[i] = c;
       
        a = b; 
      //  printf("%d\ni = %d\n",x[i],i);
        //printf("%d\n",a);
        if(a<=0){
            break;
        }
        i++;
    }

    for(i=i;i>=0;i--)
      printf("%d",x[i]);
      printf("%d",k);
      i=0;

    do{
        hex[i] = k % 16;
        k /= 16;
        i++;    
    }while(k > 0);
 
    
     
    for(j = i - 1; j >= 0; j--)
    {
        switch(hex[j])
        {
            case 15 : printf("f"); break;
            case 14 : printf("e"); break;
            case 13 : printf("d"); break;
            case 12 : printf("c"); break;
            case 11 : printf("b"); break;
            case 10 : printf("a"); break;
            default : printf("%d", hex[j]);
        }   
    }
}