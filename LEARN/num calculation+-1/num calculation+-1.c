#include <stdio.h>

int main(void) {
int i = 0;
int num = 0;

num = ++i;   // i = i + 1; num = i;
printf("++() %d\n", num);

num = --i;    // i = i - 1; num = i;
printf("--() %d\n", num);

int k = 0;
int num2 = 0;

num2 = k++;    //num = i; i = i + 1;
printf("()++ %d\n", num2);

num2 = k--;     //num = i; i = i - 1;
printf("()-- %d\n", num2);

    return 0;
}
