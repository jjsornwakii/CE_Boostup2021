#include <stdio.h>
	int main(){
		int m,n,i,j,k,x,y,c;
	scanf("%d %d",&m,&n);
        scanf("%d %d",&x,&y);
		int a[101][101],b[101][101],s[101][101]; //

        for(i=0;i<m;i++){
                for(j=0;j<y;j++){
                    s[i][j] = 0;

                }

            }



			for(i=0;i<m;i++){
				for(j=0;j<n;j++){
					scanf("%d",&a[i][j]);		
				}
			}
			for(i=0;i<x;i++){
				for(j=0;j<y;j++){
					scanf("%d",&b[i][j]);		
				}
			}
        if((m>=1&&m<=100)&&(n>=1&&n<=100)&&(x>=1&&x<=100)&&(y>=1&&y<=100)&&(n==x)){
            for(i=0;i<m;i++){
                for(j=0;j<y;j++){
                    //s[i][j]=0;
                    for(c=0;c<n;c++){
                        s[i][j]+=a[i][c]*b[c][j];
                        
                    }
                    //printf("%d\n",s[i][j]);
                }
            }




            for(i=0;i<m;i++){
                for(j=0;j<y;j++){
                    printf("%d ",s[i][j]);

                    if(j==y-1){
                        printf("\n");
                        break;
                    }
                }

            }
        }
        else
            printf("error");
			
				return 0;
			}
	