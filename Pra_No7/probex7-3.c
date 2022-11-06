#include<stdio.h>
#include<stdlib.h>

#define SIZE 256
#define FILE_PATH "C:\\Users\\fumiy\\ghq\\github.com\\Trigger-FK\\Remedial--C-language\\Pra_No7\\words.txt"

int main(void){
    FILE *file;
    char temp[SIZE];
    temp[0] = '\0';
    file = fopen(FILE_PATH, "w");
    if(file == NULL){
        printf("ファイルが開けません．\n");
        exit(1);
    }

    while(1){
        printf("文字列を入力してください：");
        scanf("%s", temp);
        if(*temp == 'q' && *(temp+1) == 0){
            break;
        }else{
            fprintf(file, "%s\r\n", temp);
        }
    }
    fclose(file);
    return 0;
}