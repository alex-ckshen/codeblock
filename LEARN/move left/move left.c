#include <stdio.h>

int main(void) {
    int num = 1;

    printf("2^0: %d\n", num);//00000001 -> 1

    num = num << 1;
    printf("2^1: %d\n", num);//00000010 -> 2

    num = num << 1;
    printf("2^2: %d\n", num);//00000100 -> 4

    num = num << 1;
    printf("2^3: %d\n", num);//00001000 -> 8

    return 0;
}
