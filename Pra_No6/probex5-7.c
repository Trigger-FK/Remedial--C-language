#include <stdio.h>
#include <stdlib.h>
  
void main(){
    char numString[] = "100";   //  数値の文字列
    int num;    //  numStringの数値を入れる変数
    
    num = atoi(numString);

    printf("%d\n",num);
}