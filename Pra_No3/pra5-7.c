#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void){
    int n[5];
    int sum = 0, ave = 0;
    int i;

    srand((unsigned int)time(NULL));
    for(i=0; i<5; i++){
        n[i] = rand() % 10 + 1;
        sum += n[i];
        printf("%d ", n[i]);

        if(i == 4){
            printf("\n");
        }
    }
    ave = sum / 5;
    printf("\n");
    
    printf("合計値：%d\n", sum);
    printf("平均値：%d\n", ave);

    printf("平均値より大きい数");
    for(i=0; i<5; i++){
        if(ave < n[i]){
            printf("%d ", n[i]);
        }
    }
    printf("\n");
    printf("平均値より小さい数");
    for(i=0; i<5; i++){
        if(ave > n[i]){
            printf("%d ", n[i]);
        }
    }
    printf("\n");
}