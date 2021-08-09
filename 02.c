#include<stdio.h>
int n[100],i=0,j=0,c1=0,c2=0;
int main() 
{
    while(1)
    {
        scanf("%d",&n[i]);
        if(n[i]==0)
            break;
        i++;
    
    }
    
    while (1)
    {
        if(n[j]<n[j+1])
            c1 = 1;
        else if(n[j]>n[j+1])
            c2 = 1;

        if(j==i)
            break;
        i++;
    }
    
    printf("%d %d",c1,c2);
    printf("TEST");
    return 0;
}