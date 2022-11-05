#include <stdio.h>
#include <string.h>

int main(void){
    char s[256];
    printf("文字列：");
    scanf("%s", s);

    printf("文字列の長さ：%d文字", strlen(s));

    return 0;
}