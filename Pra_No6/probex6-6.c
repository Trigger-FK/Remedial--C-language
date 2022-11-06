#include <stdio.h>
#define STUDENT 5

typedef struct{
    int id;         //  学生番号
    int kokugo;     //  国語の点数
    int sansu;      //  算数の点数
    int rika;       //  理科の点数
    int shakai;     //  社会の点数
    int eigo;       //  英語の点数
}student_data;

int sum(student_data);
// int sum(student_data *);
void change(student_data *, int *);

int main(void){
    student_data test[] = {
        {1001, 82, 43, 53, 84, 45},
        {1002, 92, 83, 88, 79, 99},
        {1003, 43, 32, 53, 45, 66},
        {1004, 72, 73, 71, 68, 59},
        {1005, 99, 72, 82, 91, 94}
    };
    int goukei[STUDENT];
    int i;

    for(i=0; i<STUDENT; i++){
        goukei[i] = sum(test[i]);
        // goukei[i] = sum(&test[i]);
    }

    change(test, goukei);

    printf("  番号  国語  数学  理科  社会  英語  合計\n");
    for(i=0; i<STUDENT; i++){
        printf("%5d %5d %5d %5d %5d %5d %5d\n",
                test[i].id, test[i].kokugo, test[i].sansu, test[i].rika, test[i].shakai, test[i].eigo, goukei[i]);
    }
    return 0;
}

int sum(student_data student){
    int sum;
    sum = student.kokugo + student.sansu + student.rika + student.shakai + student.eigo;
    return sum;
}

void change(student_data *student, int *sum){
    int i, j;
    int k = 0;
    int max = 0;
    student_data temp_data;
    int temp_sum;

    for(i=0; i<STUDENT; i++){
        for(j=k; j<STUDENT; j++){
            if(sum[j]>=max){
                max = sum[j];

                temp_sum = sum[k];
                temp_data = student[k];
                sum[k] = sum[j];
                student[k] = student[j];
                sum[j] = temp_sum;
                student[j] = temp_data;
            }
        }
        k++;
        max = 0;
    }
}

/*  問題に則したら，こんな感じ
int sum(student_data *student){
    int sum;
    sum = student->kokugo + student->sansu + student->rika + student->shakai + student->eigo;
    return sum;
}
*/