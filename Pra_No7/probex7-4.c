#include<stdio.h>
#include<stdlib.h>

#define SIZE 256
#define FILE_PATH "C:\\Users\\fumiy\\ghq\\github.com\\Trigger-FK\\Remedial--C-language\\Pra_No7\\words.txt"

int main(void){
    FILE *file;
    int c;
    file = fopen(FILE_PATH, "r");
    if(file == NULL){
        printf("ファイルが開けません．\n");
        exit(1);
    }

    while((c=fgetc(file)) != EOF){
        if((char)c == ','){
            printf("\n");
        }else{
            printf("%c", (char)c);
        }
    }
    fclose(file);
}