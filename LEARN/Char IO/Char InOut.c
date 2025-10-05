#include <stdio.h>

int main(void) {
    char buf[50];

    printf("請輸入 1 到 5 的字元：");
    scanf("%[1-5]", buf);
    printf("輸入的字元為 %s\n", buf);

    fflush(stdin); // 清除輸入緩衝區

    printf("請輸入 XYZ 任一字元：");
    scanf("%[XYZ]", buf);
    printf("輸入的字元為 %s\n", buf);

    return 0;
}
