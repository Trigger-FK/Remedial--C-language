#include "calculation2.h"//  初期値の設定

int ans;

void init(int num)
{
    ans = num;  //  値の初期化
}
//  加算
void add(int num)
{
    ans += num; //  現在の値に足し算
}
//  減算
void sub(int num)
{
    ans -= num; //  現在の値から引き算
}