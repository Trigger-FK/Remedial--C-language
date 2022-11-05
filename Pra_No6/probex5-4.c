#include <stdio.h>
#include <string.h>

int main(void){
    char s[256];
    char temp;
    int len = 0;
    printf("文字列：");
    scanf("%s", s);

    while(1){
        temp = s[len];
        if(temp != '\0'){
            len++;
        }else{
            break;
        }
    }

    printf("文字列の長さ：%d文字", len);

    return 0;
}