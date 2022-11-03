#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void){
    int n, i;
    srand((unsigned)time(NULL));
    n = rand() % 10 + 1;
    printf("数値；%d\n", n);

    for(i=0; i<n; i++){
        printf("■ ");
    }
    return 0;
}