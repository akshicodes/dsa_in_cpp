#include <stdio.h>
int main(){
    int i,sp,j;
    for(i=1;i<=5;i++){
        for(sp=4;sp>i;sp--){
            printf(" ");
        }
        for(j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
}