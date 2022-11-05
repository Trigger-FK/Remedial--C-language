#include <stdio.h>

int main(void){
    char s1[10];
    char s2[10];
    printf("文字列1：");
    scanf("%s", s1);

    printf("文字列2：");
    scanf("%s", s2);

    printf("%s%s", s1, s2);

    return 0;
}