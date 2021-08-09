#include <stdio.h>

char s;
int n,c[21],m,i,j,k,ans[21];
int main(){
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&c[i]);

    scanf("%d",&m);
int A,B;
    for(i=0;i<m;i++){
        scanf("%d %c %d",&A,&s,&B);
    
        if(s=='+'){
            ans[i] = c[A-1] + c[B-1];
        }
        if(s=='-'){
            ans[i] = c[A-1] - c[B-1];
        }
        if(s=='*'){
            ans[i] = c[A-1] * c[B-1];
        }
        if(s=='/'){
            ans[i] = c[A-1] / c[B-1];
        }
    }
    for(i=0;i<m;i++)
        printf("%d\n",ans[i]);
}