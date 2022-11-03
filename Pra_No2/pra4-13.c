#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void){
    int n;
    srand((unsigned int)time(NULL));
    n = rand() % 10 + 1;

    if(n >= 5){
        for(int i=0; i<=n; i++){
            printf("★ ");
        }
    }else{
        printf("発生した数値；%d", n);
    }
    return 0;
}