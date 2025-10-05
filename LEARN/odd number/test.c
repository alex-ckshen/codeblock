#include <stdio.h>

int main(void) {
    int input = 0;

    printf("input:");
    scanf("%d", &input);

    printf("odd num? %c\n", input & 1 ? 'Y' : 'N');

    return 0;
}
