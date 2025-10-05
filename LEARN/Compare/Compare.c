#include <stdio.h>

int main(void) {
    int score = 0;

    printf("input:");
    scanf("%d", &score);

    printf("over 60? %c\n", score >= 60 ? 'Y' : 'N');

    return 0;
}
