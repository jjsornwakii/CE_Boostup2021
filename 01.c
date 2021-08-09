#include "stdio.h"
main(){
    char str[20];
    scanf("%[^a-ce-g]",str);
    printf("%s",str);
    return 0;
}