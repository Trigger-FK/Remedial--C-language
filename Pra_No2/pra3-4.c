#include<stdio.h>

int main(void){
    int num;
    
    printf("数値を入力：");
    scanf("%d", &num);

    if(num<=10 || num >= 90){
        printf("10以下か90以上の値です．");
    }
}