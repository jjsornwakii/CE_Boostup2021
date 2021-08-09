#include <stdio.h>
int i,x[11],c=0;
int main(){

for(i=0;i<10;i++){
    scanf("%d",&x[i]);
if(x[i]<0||x[i]>100)
    c=1;
}
if(c==0){
for(i=0;i<10;i++){
    
        for(int j=0;j<9;j++){
            if(x[j]>x[j+1]){
                int temp;
                temp = x[j+1];
                x[j+1] = x[j];
                x[j] = temp;
            }
        }
    }

    printf("%d %d",x[0],x[9]);
}
else
    printf("There is something WRONG.");

return 0;
}