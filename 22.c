#include <stdio.h>
#include <string.h>
#include <math.h>
char n1[100],n2[100];
int i,j,k,s=0,p,power=0,ans;

int main(){
    scanf("%s %s",n1,n2);

    int len = strlen(n1);
    for(i=len-1;i>=0;i--){

        if(n1[i]=='a')
            p = 10;
        else if(n1[i]=='b')
            p = 11;
        else if(n1[i]=='c')
            p = 12;
        else if(n1[i]=='d')
            p = 13;
        else if(n1[i]=='e')
            p = 14;
        else if(n1[i]=='f')
            p = 15;
        else if(n1[i]>=48&&n1[i]<=57){
            p = n1[i]-48;
        }
        s+=(p*pow(16,power));
        power++;
    }
    ans = s;
    s = 0;
    power=0;
    len = strlen(n2);
    for(i=len-1;i>=0;i--){

        if(n2[i]=='a')
            p = 10;
        else if(n2[i]=='b')
            p = 11;
        else if(n2[i]=='c')
            p = 12;
        else if(n2[i]=='d')
            p = 13;
        else if(n2[i]=='e')
            p = 14;
        else if(n2[i]=='f')
            p = 15;
        else if(n2[i]>=48&&n2[i]<=57){
            p = n2[i]-48;
        }
        s+=(p*pow(16,power));
        power++;
    }
    ans +=s;
    printf("%d",ans);
    return 0;
}