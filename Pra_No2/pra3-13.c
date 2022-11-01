#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void){
    int n;
    srand((unsigned)time(NULL));
    n = rand() % 3 + 1;
    printf("数値；%d\n", n);

    switch(n){
        case 1:
            printf("グー\n");
            break;
        case 2:
            printf("チョキ\n");
            break;
        case 3:
            printf("パー\n");
            break;
    }
}