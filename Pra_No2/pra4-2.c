#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void){
    int n;
    int i = 0;
    srand((unsigned)time(NULL));
    n = rand() % 10 + 1;
    printf("数値：%d\n", n);

    while(i<n){
        printf("■ ");
        i++;
    }
    return 0;
}