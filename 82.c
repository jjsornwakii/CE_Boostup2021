#include <stdio.h>

int n,a,b,c,s=0;
float A,C
int main(){
    scanf("%d",&n);
    s = s+n;
    a = n/20;  /// ขวดที่ซื้อ

    while(1){
    b = a; //// ฝา
    c = a; //// ขวดเปล่า

    if(c/2<2||b/4<2)
        break;

    A = b / 4; // แลกฝาทุกๆ 4 ฝา ได้ A ขวด
    C = c / 2; // แลกขวดเปล่าทุกๆ 2 ขวด ได้ C ขวด
    
    s += A+C;

    a = (A+C);
    }
    printf("%d",s);
}