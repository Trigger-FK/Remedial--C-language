#include<stdio.h>

int main(void){
    double d[4] = {1.2, -1.3, 5.2, 4.8};
    for(int i=0; i<4; i++){
        printf("d[%d]=% ", i, d[i]);
    }
}