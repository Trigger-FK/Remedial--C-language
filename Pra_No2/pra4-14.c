#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void){
    int n;
    srand((unsigned int)time(NULL));
    n = rand() % 10 + 1;

    if(n%2 == 0){
        for(int i=0; i<=n; i++){
            printf("★ ");
        }
    }else{
       for(int i=0; i<=n; i++){
            printf("☆ ");
        }
    }
    return 0;
}