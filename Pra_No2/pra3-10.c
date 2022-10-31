#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void){
    int n;
    srand((unsigned)time(NULL));
    n = rand() % 100 + 1;
    printf("数値；%d\n", n);

    if(n <= 10 || n >= 90){
        printf("10以下か90以上です．");
    }else{
        printf("10より大きく90未満です．");
    }
}