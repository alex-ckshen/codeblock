#include <stdio.h>

int main(void) {
    char ch = 'A';

    printf("before encoding:%c\n", ch);

    ch = ch ^ 0x7;
    printf("after encoding:%c\n", ch);

    ch = ch ^ 0x7;
    printf("decoding:%c\n", ch);

    return 0;
}
//     01000001    65 �]���� ASCII��'A'�^
//     00000111    0x7
//XOR  01000110    70 �]���� ASCII����'F'�^
