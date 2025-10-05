#include <stdio.h>

int main(void) {
    int score = 0;
    int level = 0;

    printf("Score:");
    scanf("%d", &score);
    level = score / 10;

    switch(level) {
        case 10:
        case 9:
            puts("A");
            break;
        case 8:
            puts("B");
            break;
        case 7:
            puts("C");
            break;
        case 6:
            puts("D");
            break;
        default:
            puts("E");
    }

    return 0;
}
