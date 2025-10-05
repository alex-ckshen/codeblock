#include <stdio.h>

int main(void) {
    char buf[20];

    puts("input:");
    fgets(buf, sizeof(buf), stdin);

    puts("output:");
    puts(buf);

    return 0;
}
