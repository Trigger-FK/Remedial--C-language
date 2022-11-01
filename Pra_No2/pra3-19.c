#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void){
    int yy;
    printf("西暦を入力；");
    scanf("%d", &yy);
    printf("西暦%d年\n", yy);

    if(yy%4 == 0){
        if((yy/4)%100 == 0){
            printf("閏年です．\n");
        }
        else if(yy%100 == 0){
            printf("閏年ではないです．\n");
        }else{
            printf("閏年です．\n");
        }
    }else{
        printf("閏年ではないです．\n");
    }
    return 0;
}