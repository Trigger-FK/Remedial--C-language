#include <stdio.h>

int main(void){
    char input, output;
    unsigned char change = 0x20;
    printf("Input words:");
    scanf("%s", &input);
    output = input | change;
    printf("%x\n", output);
    return 0;
}