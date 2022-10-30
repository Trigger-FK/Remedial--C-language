#include<stdio.h>

int main(void){
    int a;
    scanf("%d", &a);
    if(a > 0){
        printf("入力した値は，正の数です．\n");
    }else{
        printf("入力した値は，正の数ではありません．\n");
    }
    return 0;
}