#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void){
    int num;
    int max = 0;
    srand((unsigned int)time(NULL));

    for(int i=0; i<=4; i++){
        num = rand() % 100 + 1;
        printf("%d\n", num);
        if(num > max){
            max = num;
        }
    }
    printf("最大値：%d", max);
    return 0;
}