#include "stdio.h"
int main()
{
    int x[3],r=0;
    scanf("%d %d %d",&x[0],&x[1],&x[2]);
    r = x[1]-x[0];
    if(r<x[2]-x[1])
        r = x[2]-x[1]-1;

    printf("%d",r);
}