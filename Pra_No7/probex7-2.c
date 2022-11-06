#include <stdio.h>
#include <stdlib.h>

#define SIZE 256
#define FILE_PATH "C:\\Users\\fumiy\\ghq\\github.com\\Trigger-FK\\Remedial--C-language\\Pra_No7\\HelloWorld.txt"

int main(void){
    FILE *file;
    char line[SIZE];
    line[0] = '\0';
    file = fopen(FILE_PATH, "r");
    if(file == NULL){
        printf("ファイルが開けません．\n");
        exit(1);
    }

    while(fgets(line, SIZE, file) != NULL){
        printf("%s", line);
    }
    fclose(file);
}