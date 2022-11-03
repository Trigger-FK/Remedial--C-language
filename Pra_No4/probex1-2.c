#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int num;
    int i;
    int max = 0, min = 0;
    
    srand((unsigned)time(NULL));
    for(i=0; i<5; i++){
        num = rand() % 10 + 1;
        printf("%d ", num);
        if(num > max){
            max = num;
        }else if(num < min){
            min = num;
        }
    }
    printf("\n");

    printf("最大値：%d\n", max);
    printf("最小値：%d\n", min);
}