#include <stdio.h>

void main(){
    int a;
    int b = 3;
    int add, sub;
    double avg;
    a = 6;
    add = a + b;
    sub = a - b;
    avg = (a+b) / 2.0;
    printf("%d + %d = %d\n", a, b, add);
    printf("%d - %d = %d\n", a, b, sub);
    printf("%d‚Æ%d‚Ì•½‹Ï’lF%f\n", a, b, avg);
}