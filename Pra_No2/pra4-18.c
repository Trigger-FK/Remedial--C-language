#include<stdio.h>

int main(void){
    for(int i=1; i<=10; i++){
        for(int j=1; j<=10; j++){
            if(i == j){
                printf("□ ");
            }else{
                printf("■ ");
            }
            if(j == 10){
                printf("\n");
            }
        }
    }
    return 0;
}