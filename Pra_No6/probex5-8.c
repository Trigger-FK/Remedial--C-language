#include <stdio.h>
#include <string.h>

int main(void){
    char s1[256], s2[256], s3[256];
    int len1, len2, len3;
    printf("文字列1：");
    scanf("%s", s1);
    printf("文字列2：");
    scanf("%s", s2);
    printf("文字列3：");
    scanf("%s", s3);

    len1 = strlen(s1);
    len2 = strlen(s2);
    len3 = strlen(s3);

    return 0;
}