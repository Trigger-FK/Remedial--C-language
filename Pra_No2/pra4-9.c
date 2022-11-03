#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void){
    int n;
    srand((unsigned int)time(NULL));

    while(1){
        n = rand() % 100 + 1;
        printf("数値；%d\n", n);
        if(n%10 == 0){
            printf("終了します．");
            break;
        }
    }
    return 0;
}