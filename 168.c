#include <stdio.h>
int year;
int main(){
    scanf("%d",&year);

if(year>0){
    if(year%4==0)
        printf("366");
    else
        printf("365");
}
else
    printf("error");

return 0;

}