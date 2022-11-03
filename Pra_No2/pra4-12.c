#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void){
    int num;
    int min = 100000;
    srand((unsigned int)time(NULL));

    for(int i=0; i<=4; i++){
        num = rand() % 100 + 1;
        printf("%d\n", num);
        if(num < min){
            min = num;
        }
    }
    printf("最小値：%d", min);
    return 0;
}