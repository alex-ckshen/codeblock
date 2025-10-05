#include <stdio.h>

int main(void) {
    int input = 0;
    int replay = 0;

    do {
        printf("insert int:");
        scanf("%d", &input);
        getchar();
        printf("odd? %c\n", ((input % 2) ? 'Y': 'N'));

        printf("continue?(1:Yes 0:Halt)?");
        scanf("%d", &replay);
        getchar();
    } while(replay);

    return 0;
}
