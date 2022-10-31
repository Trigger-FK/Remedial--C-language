#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void){
    int n;
    srand((unsigned)time(NULL)); //乱数の初期化
    n = rand() % (35+10) - 10; //1からnまでの乱数を発生させる処理
    printf("摂氏%d度\n", n);

    if(n >= 30){
        printf("真夏日です．\n");
    }else if(n >= 25 && n < 30){
        printf("夏日です．\n");
    }else if(n < 0){
        printf("真冬日です．\n");
    }
    return 0;
}