#include <stdio.h>

void max(int, int);

void main(){
    int a, b;
    printf("1つ目の値を入力してください:");
    scanf("%d", &a);     //  1つ目の数、aを入力
    printf("2つ目の値を入力してください:");
    scanf("%d", &b);     //  2つ目の数、bを入力
    max(a, b);
}

void max(int a, int b){
    int result;
    if(a > b){
        result = a; //  aのほうが大きければ、aをresultに代入
    }else{
        result = b; //  bのほうが大きければ、bをresultに代入
    }
    printf("%dと、%dのうち、大きい値は%dです。¥n", a, b, result);
}