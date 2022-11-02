#include<stdio.h>

int main(void){
    int num;
    printf("負の値で，ループから脱出\n");
    while(1){
        printf("数値を入力：");
        scanf("%d", &num);
        if(num<0){
            break;
        }
    }
    printf("終了\n");
}