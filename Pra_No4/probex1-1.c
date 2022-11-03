#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int num;
    int i;
    srand((unsigned)time(NULL));
    for(i=0; i<5; i++){
        num = rand() % 10 + 1;
        printf("%d ", num);
    }
}