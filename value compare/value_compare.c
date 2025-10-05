#include <stdio.h>
#include <stdlib.h>
#define MAX_NUM 100
#define MY_DBG  1

int main(void){
    int MAX_input;
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
    scanf("%d",&MAX_input);


    do{
        printf("input a number:");
        scanf("%d",&new_input);
        //numbers_list[input_count] = new_input;
        input_count++;

        if(input_count == 0){ //first input
            numbers_list[1] = new_input; //exit while loop
        }else {//if(input_count < MAX_input){
            next_serial = 1;
            while( (numbers_list[next_serial] < new_input) && (next_serial < input_count) ){
                next_serial++;
            }

            for(int i = input_count; i >= next_serial; i--){
                temp = numbers_list[i];
                numbers_list[i+1] = temp;
            }

            numbers_list[next_serial] = new_input;

        }

    #if (MY_DBG == 1)
        for(int i = 1 ; i < MAX_input+1 ; i++){
            printf("%d ", numbers_list[i] );
        }
        printf("\n");

    #endif


    }while(input_count < MAX_input);


        for(int i = 1 ; i < MAX_input+1 ; i++){
            printf("%d ", numbers_list[i] );
        }
        printf("\n");

    return 0;

}
