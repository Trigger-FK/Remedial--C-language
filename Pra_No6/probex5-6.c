#include <stdio.h>

int main(void){
    char s1[256], s2[256];
    char temp1, temp2;
    int n = 0;
    int dis = 0;

    printf("文字列1：");
    scanf("%s", s1);

    printf("文字列2：");
    scanf("%s", s2);

    while(1){
        temp1 = s1[n];
        temp2 = s2[n];
        if(temp1 == '\0' && temp2 == '\0'){
            break;
        }else if(temp1 != '\0' && temp2 == '\0' || temp1 == '\0' && temp2 != '\0'){
            dis++;
            break;
        }else if(temp1 != temp2){
            dis++;
        }
    }

    if(dis == 0){
        printf("同じです．");
    }else{
        printf("異なります．");
    }
    return 0;
}