#include<stdio.h>
#include<stdlib.h>

#define FILE_PATH "C:\\Users\\fumiy\\ghq\\github.com\\Trigger-FK\\Remedial--C-language\\Pra_No7\\HelloWorld.txt"

int main(void){
    FILE *file;
    file = fopen(FILE_PATH, "w");
    if(file == NULL){
        printf("ファイルが開けません．\n");
        exit(1);
    }
    fprintf(file, "Hello World. \r\n");
    fclose(file);
}