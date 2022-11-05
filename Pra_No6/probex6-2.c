#include <stdio.h>
#include <string.h>

#define STUDENT_NUM 5

struct student{
    char name[256];
    int id;
    int gender;
    int grade;
};

void main(){
    struct student data[] = {
        {"青木一", 1001, 0, 1},
        {"遠藤京子", 1002, 1, 1},
        {"加藤悟", 1003, 0, 1},
        {"佐々木八重子", 1004, 1, 1},
        {"田中徹", 1005, 0, 1},
    };

    int i;
    for(i = 0; i < STUDENT_NUM; i++){
        printf("名前：%s\n", data[i].name);
        printf("性別：");
        if(data[i].gender == 1){
            printf("女\n");
        }else{
            printf("男\n");
        }
        printf("学籍番号：%d\n", data[i].id);
        printf("学年：%d\n", data[i].grade);
        printf("\n");
        }
    }