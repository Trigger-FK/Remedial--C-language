#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 5

void showResult(int *);
void twice(int *);

int main(void){
    int nums[SIZE];
    int i;
    srand((unsigned)time(NULL));
    for(i=0; i<SIZE; i++){
        nums[i] = rand() % 100 + 1;
    }
    int *p = NULL;
    p = nums;    //numsのアドレス渡し

    printf("発生した乱数：\n");
    showResult(p);

    printf("\n");

    printf("二倍した値：\n");
    twice(p);
    showResult(p);

    return 0;
}

void showResult(int *p){    //ポイント変数の定義のようなもの -> int *~
    int i;    //for文用
    for(i=0; i<SIZE; i++){
        printf("%d ", *p);    //アドレス先の値を表示
        p++;
    }
}

void twice(int *p){    //ポイント変数の定義のようなもの -> int *~
    int i;    //for文用
    for(i=0; i<SIZE; i++){
        *p *= 2;    //アドレス先の値を二倍
        p++;
        //*(p+i) *= 2 でも動くのを確認
    }
}