#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 10
#define FILE_PATH "C:\\Users\\fumiy\\ghq\\github.com\\Trigger-FK\\Remedial--C-language\\Pra_No7\\nums.txt"

int main(void){
    FILE *file;
    char nums[SIZE][SIZE];
    int c;
    int i = 0;
    int j = 0;
    int sum = 0;
    int k;
    file = fopen(FILE_PATH, "r");
    if(file == NULL){
        printf("ファイルが開けません．\n");
        exit(1);
    }

    while((c=fgetc(file)) != EOF){
        if((char)c == ','){
            nums[i][j] = '\0';
            sum += atoi(nums[i]);
            i++;
            j = 0;
        }else{
            nums[i][j] = (char)c;
            j++;
        }
    }
    nums[i][j] = '\0';
    sum += atoi(nums[i]);

    for(k=0; k<=i; k++){
        printf("%s\n", nums[k]);
    }
    printf("---------\n");
    printf("合計：%d", sum);
    fclose(file);

    return 0;
}