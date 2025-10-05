#include <stdio.h>

int main(void) {
    for (int i = 2, j = 1; j < 10; i == 9 ? i = (++j/j) + 1 : i++) {
        printf("%d*%d=%2d%c", i, j, i * j, i == 9 ? '\n' : ' ');
    }

    return 0;
}
