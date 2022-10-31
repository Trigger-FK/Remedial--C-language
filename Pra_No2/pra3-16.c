#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void){
    int n;
    srand((unsigned)time(NULL)); //乱数の初期化
    n = rand() % 100 + 1; //1からnまでの乱数を発生させる処理
    printf("数値：%d\n", n);

    if(n%6 == 0){
        printf("2と3の公倍数です．");
    }else if(n%2 == 0){
        printf("2の倍数です．");
    }else if(n%3 == 0){
        printf("3の倍数です．");
    }
    return 0;
}