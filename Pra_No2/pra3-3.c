#include<stdio.h>

int main(void){
    int num;
    
    printf("数値を入力：");
    scanf("%d", &num);

    if(num<50){
        printf("50未満です．");
    }
}