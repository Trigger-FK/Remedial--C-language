#include<stdio.h>

int main(void){
    int dice;
    printf("1から6の数値を入力してください：");
    scanf("%d", &dice);

    if(1 <= dice && dice <= 6){
        if((dice % 2) == 0){
            printf("丁です．\n");
        }else{
            printf("半です．\n");
        }
    }else{
            printf("範囲外の数値です．\n");
    }
    return 0;
}