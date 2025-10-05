#include <stdio.h>

int main(void) {
    int input = 0;
    int remain = 0;

    printf("Enter an integer: ");
    scanf("%d", &input);

    remain = input % 2; //¨D±o¾l¼Æ
    if (remain == 1) {
        printf("%d is an odd number\n", input);
    } else {
        printf("%d is an even number\n", input);
    }

    return 0;
}
