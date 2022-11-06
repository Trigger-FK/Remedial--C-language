#include<stdio.h>
#include<stdlib.h>

#define FILE_PATH "C:\\Users\\fumiy\\ghq\\github.com\\Trigger-FK\\Remedial--C-language\\Pra_No7\\words2.txt"

int main(void){
    FILE *file;
    char fruit[10][256];
    int i = 0;
    int j = 0;
    int sum = 0;
    int c, k;
    file = fopen(FILE_PATH, "r");
    if(file == NULL){
        printf("ファイルが開けません．\n");
        exit(1);
    }

    while((c=fgetc(file)) != EOF){
        if(((char)c) == ','){
            fruit[i][j] = '\0';
            i++;
            j = 0;
        }else{
            fruit[i][j] = (char)c;
            j++;
        }
    }
    fruit[i][j] = '\0';

    for(k=0; k<=i; k++){
        if(fruit[k][0] == 'a'){
            printf("%s\n", fruit[k]);
            sum += 1;
        }
    }
    printf("---------\n");
    printf("個数：%d", sum);

    fclose(file);
    return 0;
}