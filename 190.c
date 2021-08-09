#include <stdio.h>
#include <string.h>

char str[100],ch[27];
int i,j,k,len,lenn=0,n[27];
int main(){
    scanf("%[^\n]s",str);
    len = strlen(str);

for(i=0;i<len;i++){
   for(j=0;j<len-1;j++){
    

       if(str[j]>str[j+1]){
        char c;
        c = str[j];
        str[j] = str[j+1];
        str[j+1] = c;
       }
   }
}

for(i=0;i<len;i++){
    if(str[i]!=32){
        if(str[i]!=str[i+1]){
            ch[lenn]=str[i];
            lenn++;

        }

        if(str[i]==str[i+1]){
            n[lenn]++;
        }

    }
}

for(i=0;i<lenn;i++){

    printf("%c : %d\n",ch[i]-32,n[i]+1);

}
return 0;
}