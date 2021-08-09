#include <stdio.h>
#include <string.h>

char str[100],getstr[100];
int n,i,j=0,k,len=0,getlen=0,c=0,newlen[100];
int main(){
    scanf("%d",&n);

    for(i=0;i<n;i++){

        scanf("%s",str);
       // getlen = 0+len;
        len = strlen(str);
        newlen[i]= len;
       // printf("%d\n",newlen[i]);
       // printf("get = %d\n",getlen);
      //  printf("len = %d\n",len);

        for(k=getlen;k<len+j;k++){
          //  printf("C == %d   K == %d\n",c,k);
            getstr[k]=str[c];
            c++;
           // printf("%c",getstr[k]);
            
        }
        getlen +=len;
        j=k;
        c=0;
    }
    //printf("%d %d %d",newlen[0],newlen[1],newlen[2]);
    c=0;
    k=0;
    len= strlen(getstr);
    getlen = newlen[k];
    //printf("LEN === %d",len);
    for(i=0;i<len;i++){

        printf("%c",getstr[i]);

        if(c+1==getlen){
            printf("\n");
            c=-1;

            for(j=0;j<=newlen[k]-1;j++){
                if(i==len-1)
                    break;
                printf(" ");
            }
            newlen[k+1]+=newlen[k];
            c=newlen[k]-1;
            k++;
            getlen = newlen[k];
            
        }
        c++;
        





    }


}