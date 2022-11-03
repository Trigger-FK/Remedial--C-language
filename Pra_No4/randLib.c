#include "randLib.h"
#include <stdlib.h>
#include <time.h>

//  乱数の初期化
void init_rand()
{
    srand((unsigned) time(NULL));
}
//  指定した範囲の乱数を発生
int getRand(int start, int end)
{
    return rand() % (end - start + 1) + start;
}