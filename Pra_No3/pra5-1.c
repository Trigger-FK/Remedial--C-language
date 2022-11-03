#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void){
    int a[6];
    srand((unsigned int)time(NULL));
    for(int i=1; i<=6; i++){
        a[i] = rand() % 10 + 1;
    }
    for(int i=1; i<=6; i++){
        printf("a[%d]=%d ", i, a[i]);
    }
}