#include<stdio.h>
#include<stdlib.h>

#define FILE_PATH "C:\\Users\\fumiy\\ghq\\github.com\\Trigger-FK\\Remedial--C-language\\Pra_No7\\score.txt"

int main(void){
    FILE *file;
    char data[10][2][256];
    int score[10];
    int high_score = 0;
    int player = 0;
    int length = 0;
    int categoly = 0;   //  0:player name, 1:score
    int i = 0;
    int best;
    int c;

    file = fopen(FILE_PATH, "r");
    if(file == NULL){
        printf("ファイルが開けません．\n");
        exit(1);
    }

    while((c=fgetc(file)) != EOF){
        // printf("%2x\n", c, c);
        if((char)c == ','){
            data[player][categoly][length] = '\0';
            //printf("%s\n", data[player][categoly]);
            categoly = 1;
            length = 0;
        }else if((char)c == '\n'){
            data[player][categoly][length] = '\0';
            score[player] = atoi(data[player][categoly]);
            length = 0;
            categoly = 0;
            player++;
        }else{
            data[player][categoly][length] = (char)c;
            length++;
        }
    }

    data[player][categoly][length] = '\0';
    score[player] = atoi(data[player][categoly]);
    categoly = 0;

    // for(i=0; i<=player; i++){
    //     printf("%s %d\n", data[i][categoly], score[i]);
    // }

    for(i=0; i<=player; i++){
        if(score[i] >= high_score){
            high_score = score[i];
            best = i;
        }
    }

    printf("プレイヤー 得点\n");
    printf("--------------------\n");
    for(i=0; i<=player; i++){
        printf("%s %d\n", data[i][categoly], score[i]);
    }
    printf("--------------------\n");
    printf("最高得点：%s(%d点)", data[best][categoly], score[best]);

    fclose(file);
    return 0;
}