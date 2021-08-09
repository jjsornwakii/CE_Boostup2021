#include <stdio.h>
int n,c,i;
int main(){
    scanf("%d",&n);
    c = 96;
if(n>=0){
    for(i=1;i<=n;i++){
        c++;
        if(c==123)
            c=97;

        printf("%c",c);
    }
}
else
    printf("ERROR");

}