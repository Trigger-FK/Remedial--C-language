#include <stdio.h>
#include <string.h>

int main(void){
    char s1[10];
    char s2[10];
    printf("文字列1：");
    scanf("%s", s1);

    printf("文字列2：");
    scanf("%s", s2);

    if(strcmp(s1, s2) == 0){
        printf("同じものです．");
    }else{
        printf("異なるものです．");
    }

    return 0;
}