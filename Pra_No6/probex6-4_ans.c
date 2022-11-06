#include <stdio.h>

typedef struct
{
    int id;     //  学生番号
    int kokugo; //  国語の点数
    int sansu;  //  算数の点数
    int rika;   //  理科の点数
    int shakai; //  社会の点数
    int eigo;   //  英語の点数
} student_data;

//構造体の配列を渡すので、ポインタ渡しになる（配列を渡すときはポインタなので）
float avg_student_kokugo(student_data students[]);
float avg_student_sansu(student_data students[]);
float avg_student_rika(student_data students[]);
float avg_student_shakai(student_data students[]);
float avg_student_eigo(student_data students[]);

int main(void)
{
    int i;
    int kokugo[] = {82, 92, 43, 72, 99};
    int sansu[] = {43, 83, 32, 73, 72};
    int rika[] = {53, 88, 53, 71, 82};
    int shakai[] = {84, 79, 45, 68, 91};
    int eigo[] = {45, 99, 66, 59, 94};
    student_data data[5];

    for (i = 0; i < 5; i++)
    {
        data[i].id = 1001 + i; // 1001-1005
        data[i].kokugo = kokugo[i];
        data[i].sansu = sansu[i];
        data[i].rika = rika[i];
        data[i].shakai = shakai[i];
        data[i].eigo = eigo[i];
    }

    // データ確認
    for (i = 0; i < 5; i++)
    {
        printf("%4d %2d %2d %2d %2d %2d\n",
               data[i].id,
               data[i].kokugo,
               data[i].sansu,
               data[i].shakai,
               data[i].rika,
               data[i].eigo);  //長くなりすぎるときはこのような改行を入れる
        data[i].id = 1001 + i; // 1001-1005
    }

    printf("国語 平均=%2.2f\n", avg_student_kokugo(data));
    printf("算数 平均=%2.2f\n", avg_student_sansu(data));
    printf("社会 平均=%2.2f\n", avg_student_shakai(data));
    printf("理科 平均=%2.2f\n", avg_student_rika(data));
    printf("英語 平均=%2.2f\n", avg_student_eigo(data));

    return 0;
}

float avg_student_kokugo(student_data students[])
{
    //受け取った構造体配列のメンバー（国語）を合計し、平均値を返す。
    int i;
    int sum = 0;
    for (i = 0; i < 5; i++)
    {
        //この時、アロー演算子ではなく、ドット演算子を使う
        sum += students[i].kokugo;
        // sum += (*(students+i)).kokugo;

        /*
            元々、アロー演算子とは

            student_data student;
            student_data p;
            p->kokugo;

            のように扱うが、

            (*p).kokugo

            と同じ意味

            「構造体実態は.を使い、構造体ポインタは->を使う」は間違っていないが、

            配列は元々ポインタである。

            つまり、この場合

            students[i]が*(students+i)であり、
            (*(students+i)).kokugoとなる。

            つまり、students[i].kokugoと書くのだ。
        */
    }
    return (float)sum / i;
}

float avg_student_sansu(student_data student[])
{
    int i;
    int sum = 0;
    for (i = 0; i < 5; i++)
    {
        sum += student[i].sansu;
    }
    return (float)sum / i;
}

float avg_student_rika(student_data student[])
{
    int i;
    int sum = 0;
    for (i = 0; i < 5; i++)
    {
        sum += student[i].rika;
    }
    return (float)sum / i;
}

float avg_student_shakai(student_data student[])
{
    int i;
    int sum = 0;
    for (i = 0; i < 5; i++)
    {
        sum += student[i].shakai;
    }
    return (float)sum / i;
}

float avg_student_eigo(student_data student[])
{
    int i;
    int sum = 0;
    for (i = 0; i < 5; i++)
    {
        sum += student[i].eigo;
    }
    return (float)sum / i;
}