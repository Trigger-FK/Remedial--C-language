#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void){
    int n;
    srand((unsigned)time(NULL)); //乱数の初期化
    n = rand() % 6 + 1; //1からnまでの乱数を発生させる処理
    printf("数値：%d\n", n);

    if(n>=3){
        printf("3以上です．");
    }
    return 0;
}