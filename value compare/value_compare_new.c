#include <stdio.h>
#include <stdlib.h>
#define MAX_NUM 100
#define MY_DBG  1


void insert(int list[], int n) {
    int temp;
    if ( (n >= 1) && (list[n] < list[n-1]) ) {
        temp = list[n-1];
        list[n-1] = list[n];
        list[n] = temp;
        insert(list, n-1);
    }

    return;  // Base case: one element is already sorted
}

int main(void){
    int max_input;
    int numbers_list[MAX_NUM] = {0};   //skipping 0 and using 1 as first
    int new_input;
    int input_count = 0;
    int next_serial;
    int temp;

    //init
    for(int i = 0 ; i < MAX_NUM ; i++){
        numbers_list[i] = 0;
    }

    printf("Total Numbers (<%d):", MAX_NUM);
    scanf("%d",&max_input);

    input_count = 0;
    do{
        printf("input a number:");
        scanf("%d",&new_input);
        numbers_list[input_count] = new_input;
        insert(numbers_list, input_count);

#if (MY_DBG == 1)
        for(int i = 0 ; i < max_input ; i++){
            printf("%d ", numbers_list[i] );
        }
        printf("\n");

#endif
        input_count++;

    }while(input_count < max_input);

#if (MY_DBG == 0)
    for(int i = 0 ; i < MAX_input+1 ; i++){
            printf("%d ", numbers_list[i] );
    }
    printf("\n");
#endif

    return 0;

}
