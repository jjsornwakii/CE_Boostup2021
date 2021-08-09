#include<stdio.h>
int x[11],sum=0,i,j,c=0;
int main() 
{
  for(i=1;i<=10;i++){
    scanf("%d",&x[i]);
      
  }
  for(j=1;j<=10;j++){
      sum +=x[j];
        if(sum+x[j+1]>=100){
            c++;
           // printf("sum =%d\n",sum);
            sum = 0;
            
        }
  }
  if(sum!=0)
        c++;

  
    printf("%d",c);


}