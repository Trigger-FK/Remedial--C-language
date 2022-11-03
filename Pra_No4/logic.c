#include "logic.h"
#include <time.h>
#include <stdlib.h>

int player, computer;
//  初期化
void init()
{
    srand((unsigned) time(NULL));
}
//  指定した範囲の乱数を発生
void setPlayer(int num)
{
    player = num;
}
//  指定した範囲の乱数を発生
void setComputer()
{
    computer = rand() % 3;
}