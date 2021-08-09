#include <stdio.h>
#include <string.h>
char d1[3],d2[3],c[8];
int n,a,b,x,y,i;
int main(){
    scanf("%s-%s",d1,d2);
    
    
    if(strcmp(d1,"Mo")==0)
        a = 1;
    else if(strcmp(d1,"Tu")==0)
        a = 2;
    else if(strcmp(d1,"We")==0)
        a = 3;
    else if(strcmp(d1,"Th")==0)
        a = 4;
    else if(strcmp(d1,"Fr")==0)
        a = 5;
    else if(strcmp(d1,"Sa")==0)
        a = 6;
    else if(strcmp(d1,"Su")==0)
        a = 7;
///////////////////////////////////////////
    if(strcmp(d2,"Mo")==0)
        b = 1;
    else if(strcmp(d2,"Tu")==0)
        b = 2;
    else if(strcmp(d2,"We")==0)
        b = 3;
    else if(strcmp(d2,"Th")==0)
        b = 4;
    else if(strcmp(d2,"Fr")==0)
        b = 5;
    else if(strcmp(d2,"Sa")==0)
        b = 6;
    else if(strcmp(d2,"Su")==0)
        b = 7;
printf("a=%d b=%d\n",a,b);
scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",c);
    printf("%d\n",strcmp(c,"Mo"));
    if(strcmp(c,"Mo")==0)
        x = 1;
    else if(strcmp(c,"Tu")==0)
        x = 2;
    else if(strcmp(c,"We")==0)
        x = 3;
    else if(strcmp(c,"Th")==0)
        x = 4;
    else if(strcmp(c,"Fr")==0)
        x = 5;
    else if(strcmp(c,"Sa")==0)
        x = 6;
    else if(strcmp(c,"Su")==0)
        x = 7;

        if(x>=a&&x<=b)
            printf("Nope.\n"); 

        else
            printf("Yes.\n");   
    }
}