#include <stdio.h>
#define SUBJECT 5

typedef struct{
    int id;         //  学生番号
    int kokugo;     //  国語の点数
    int sansu;      //  算数の点数
    int rika;       //  理科の点数
    int shakai;     //  社会の点数
    int eigo;       //  英語の点数
}student_data;

float ave_kokugo(student_data students[]);
float ave_sansu(student_data students[]);
float ave_rika(student_data students[]);
float ave_shakai(student_data students[]);
float ave_eigo(student_data students[]);

int main(void){
    student_data test[] = {
        {1001, 82, 43, 53, 84, 45},
        {1002, 92, 83, 88, 79, 99},
        {1003, 43, 32, 53, 45, 66},
        {1004, 72, 73, 71, 68, 59},
        {1005, 99, 72, 82, 91, 94}
    };

    printf("国語　平均=%2.2f\n", ave_kokugo(test));
    printf("算数　平均=%2.2f\n", ave_sansu(test));
    printf("社会　平均=%2.2f\n", ave_shakai(test));
    printf("理科　平均=%2.2f\n", ave_rika(test));
    printf("英語　平均=%2.2f\n", ave_eigo(test));

    return 0;
}

float ave_kokugo(student_data student[]){
    int i;
    float sum = 0;
    for(i=0; i<SUBJECT; i++){
        sum += (float)student[i].kokugo;
    }
    return sum / i;
}

float ave_sansu(student_data student[]){
    int i;
    float sum = 0;
    for(i=0; i<SUBJECT; i++){
        sum += (float)student[i].sansu;
    }
    return sum / i;
}

float ave_rika(student_data student[]){
    int i;
    float sum = 0;
    for(i=0; i<SUBJECT; i++){
        sum += (float)student[i].rika;
    }
    return sum / i;
}

float ave_shakai(student_data student[]){
    int i;
    float sum = 0;
    for(i=0; i<SUBJECT; i++){
        sum += (float)student[i].shakai;
    }
    return sum / i;
}

float ave_eigo(student_data student[]){
    int i;
    float sum = 0;
    for(i=0; i<SUBJECT; i++){
        sum += (float)student[i].eigo;
    }
    return sum / i;
}