#include <stdio.h>
int n[100],i=0,sum=0,max=0,c=0;
int main(){
while(c==0){
    scanf("%d",&n[i]);
  
    sum += n[i];
    if(n[i]>max){
        max = n[i];
    }
    else
        c=1;
    i++;
}    



for(int j=0;j<i;j++){
        for(int k=0;k<i-1;k++){
            if(n[k]>=n[k+1]){
                int temp;
                temp = n[k];
                n[k] = n[k+1];
                n[k+1] = temp;
            }
        }
    }
float ave;
ave = sum/(float)(i);
printf("%d %d %d %.2f",sum,n[0],n[i-1],ave);
}