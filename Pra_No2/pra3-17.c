#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void){
    int n;
    srand((unsigned)time(NULL)); //乱数の初期化
    n = rand() % 10 + 1; //1からnまでの乱数を発生させる処理
    printf("数値：%d\n", n);

    if(n <= 50){
        if(n%2 == 0){
            printf("50以下の偶数です．\n");
        }else{
            printf("50以下です．\n");
        }
    }else{
        if(n%2 == 0){
            printf("偶数です．\n");
        }
    }
    return 0;
}