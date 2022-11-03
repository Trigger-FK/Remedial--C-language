#include<stdio.h>

int main(void){
    for(int i=1; i<=9; i++){
        for(int j=1; j<=9; j++){
            printf("%d*%d=%d ", j, i, j*i);
            if(j == 9){
                printf("\n");
            }
        }
    }
    return 0;
}