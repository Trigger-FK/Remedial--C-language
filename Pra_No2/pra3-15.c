#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void){
    int n;
    srand((unsigned)time(NULL));
    n = rand() % 100 + 1;
    printf("数値；%d\n", n);

    if(n >= 80){
        printf("優");
    }else if(n >= 70 && n < 80){
        printf("良");
    }else if(n >= 60 && n < 70){
        printf("可");
    }else if(n < 60){
        printf("不可");
    }
}