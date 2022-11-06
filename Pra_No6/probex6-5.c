#include <stdio.h>
#define MONTH_NUM 6

typedef struct{
    char* month;
    int house;
    int eat;
    int cloth;
    int edu;
    int medi;
    int other;
}kakei;

void goukei(kakei kurashi[]);

int main(void){
    int i;
    int max_medi = 0;
    int max_eat = 0;
    char* high_medi;
    char* high_eat;

    kakei kurashi[] = {
        {"1月", 86000, 47000, 3000, 20000, 9500, 66000},
        {"2月", 86000, 43000, 30000, 15000, 0, 43000},
        {"3月", 86000, 38600, 5000, 65000, 500, 76000},
        {"4月", 86000, 39500, 0, 12000, 0, 75000},
        {"5月", 86000, 38600, 28000, 7000, 5200, 63500},
        {"6月", 86000, 37500, 3000, 5000, 0, 67000}
    };

    for(i=0; i<MONTH_NUM; i++){
        if(kurashi[i].medi>max_medi){
            max_medi = kurashi[i].medi;
            high_medi = kurashi[i].month;
        }
    }

    for(i=0; i<MONTH_NUM; i++){
        if(kurashi[i].eat>max_eat){
            max_eat = kurashi[i].eat;
            high_eat = kurashi[i].month;
        }
    }

    printf("各月の出費の合計\n");
    printf("---------------------\n");
    goukei(kurashi);
    printf("\n");
    printf("医療費の最も多い月：%s\n", high_medi);
    printf("食費の最も多い月と金額：%s、%d\n", high_eat, max_eat);
    return 0;
}

void goukei(kakei kurashi[]){
    int i;
    int sum;
    for(i=0; i<MONTH_NUM; i++){
        sum = kurashi[i].house + kurashi[i].eat + kurashi[i].cloth + kurashi[i].edu + kurashi[i].medi + kurashi[i].other;
        printf("%s：%d\n", kurashi[i].month, sum);
    }
}