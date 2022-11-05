#include <stdio.h>

typedef struct{
    int id;         //  学生番号
    int kokugo;     //  国語の点数
    int sansu;      //  算数の点数
        int rika;               //      理科の点数
    int shakai;     //  社会の点数
    int eigo;       //  英語の点数
}student_data;

int main(void){
    student_data test = {
        {1001, 82, 43, 53, 84, 45},
        {1002, 92, 83, 88, 79, 99},
        {1003, 43, 32, 53, 45, 66},
        {1004, 72, 73, 71, 68, 59},
        {1005, 99, 72, 82, 91, 94}
    };
    return 0;
}

int avg()