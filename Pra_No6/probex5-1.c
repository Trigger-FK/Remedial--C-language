#include <stdio.h>
#include <string.h>

int main(void){
    char s[10];
    char temp[10];
    printf("文字列1：");
    scanf("%s", temp);
    strcpy(s, temp);

    printf("文字列2：");
    scanf("%s", &temp);

    strcat(s, temp);
    printf("%s", s);

    return 0;
}