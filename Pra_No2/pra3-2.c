#include<stdio.h>

int main(void){
    int num;
    
    printf("数値を入力：");
    scanf("%d", &num);

    if(num!=1){
        printf("1ではありません．");
    }
}