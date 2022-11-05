#include <stdio.h>

typedef struct{
    int hour; // 時間(0～23時）
    int minute; // 分(0～59分)
    int second; // 秒(0～59秒)
}Time;

// 時間の設定
void setTime(Time*, int, int, int);
// 時間の差を秒で取得
int getDiffMinute(Time*, Time*);

void main(){
    Time start, end; // 開始時間と終了時間
    int diff;
    start.hour = 1; 
    start.minute = 10;
    start.second = 13; // 開始時間は、1時10分13秒
    end.hour = 2;
    end.minute = 20;
    end.second = 42; // 終了時間は、2時20分42秒
    diff = getDiffMinute(&start, &end); // 2つの時間の差を秒で計算
    printf("%d:%d:%dと、%d:%d:%dの違いは、%d秒です。\n"
            , start.hour, start.minute, start.second, end.hour, end.minute, end.second, diff);

}

// 時間の設定
void setTime(Time* time, int hour, int minute, int second){
    time->hour = hour;
    time->minute = minute;
    time->second = second;
}

// 時間の差を秒で取得
int getDiffMinute(Time* start, Time* end)
{
    int Diff = 60*(60*(start->hour - end->hour) + (start->minute - end->minute)) + (start->second - end->second);
    if(Diff < 0){
        return -1 * Diff;
    }else{
        return Diff;
    }

}