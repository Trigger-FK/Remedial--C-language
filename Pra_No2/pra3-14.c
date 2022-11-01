#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void){
    int n, m;
    srand((unsigned)time(NULL));
    n = rand() % 20 - 10;
    m = rand() % 20 - 10;
    printf("数値；%d, %d\n", n, m);

    if(n > m){
        printf("nの方が大きいです．");
    }else if(n < m){
        printf("mの方が大きいです．");
    }else{
        printf("等しいです．");
    }
}