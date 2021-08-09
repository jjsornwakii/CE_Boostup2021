#include<stdio.h>
int s;
char c;
int main(){
    scanf("%d%[^\n]c",&s,&c);
    printf("%d %d\n",s,c);
if(s<=100&&s>=0&&c==0){
    if(s<=100&&s>=80)
    printf("A");
    else if(s>=75)
    printf("B+");
    else if(s>=70)
    printf("B");
    else if(s>=65)
    printf("C+");
    else if(s>=60)
    printf("C");
    else if(s>=55)
    printf("D+");
    else if(s>=50)
    printf("D");
    else if(s>=0)
    printf("B+");
    else
    printf("ERROR");
}
else
    printf("ERROR");

    return 0 ;
}