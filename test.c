#include <stdio.h>

#define DEBUG 0  // Change this to 0 to disable debugging

int main(void) {
    int a = 10, b = 20, sum = a + b;

#if (DEBUG==1)
    printf("Debug Mode: a = %d, b = %d, sum = %d\n", a, b, sum);
#endif

    printf("Result: %d\n", sum);

    return 0;
}
