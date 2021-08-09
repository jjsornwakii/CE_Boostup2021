#include<stdio.h>
int x,y,i,n[10],c=0,t=1,start,a,b=0;
int main() 
{
    scanf("%d",&x);
   
    while (1){
        ////////////////// นับหน่วยยยยยยยยยยยยยยย
        if(x/(t)!=0){
        c++;
        }
        else
            break;
    
        t*=10;
    }
    t/=10;
    y = c / 3 ; ////// ครั้ง ,
    start = c - (y*3); ///// จุดเริ่ม ,

    for(i=1;i<=c;i++){
        a=x/t;
        x-=a*t;
        t/=10;
        n[i]=a;
        
        printf("%d",n[i]);
        if(i%3==0)
            b++;
        if(i==start+(3*b)&&i!=c){
            printf(",");
        }
        
        
    }
    
    

  
    return 0;
}