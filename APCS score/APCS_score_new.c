#include <stdio.h>
#define arr_max 20

//0 as 1 !
int input_count;
int list[arr_max];



int main(void){

    //--------------------------------------------setting up list
    scanf("%d",&input_count);
    for( int i = 0 ; i < input_count ; i++ ){
        list[i] = 0;
    }


    //--------------------------------------------input for list
    //important: start from [1] to [imput_count - 1]
    for( int i =  0 ; i < input_count ; i++){
        scanf("%d", &list[i]);
    }

    //--------------------------------------------sorting input
    int new_list[input_count];
    for( int i = 0 ; i < input_count ; i++ ){
        new_list[i] = 101;
    }
    //default to 101 so blank is always larger than input

     for( int read_in = 0; read_in < input_count; read_in++){

        int keep_on = 1;
        int compare_with = 0;
        int temp = list[read_in];


        do{
            if(read_in == 0){       //first input
                new_list[0] = temp;
                keep_on = 0;
            }else{                  //inputs after 1st
                if(temp > new_list[compare_with]){
                    compare_with++;                 //find its place
                }else{
                    for(int i = input_count-1; i >= compare_with;i-- ){
                        new_list[i] = new_list[i-1];
                    }

                    new_list[compare_with] = temp;
                    keep_on = 0;
                }
            }

        }while(keep_on);
    }

    //--------------------------------------------printing results
    for(int i = 0 ; i < input_count ; i++){
        printf("%d ",new_list[i]);
    }
    printf("\n");

    //--------------------------------------------finding fail/pass
    int fail_count;
    int pass_count;
    for(int i = 0; i < input_count; i++){
        if(new_list[i] < 60){
            fail_count++;
        }else{
            pass_count++;
        }
    }

    if(fail_count==input_count){                                     //whole class fail
        printf("%d \n",new_list[fail_count-1]);//fail(highest)
        printf("worst case \n");               //pass
    }else if(pass_count==input_count){                              //whole class pass
        printf("best case \n");                //fail
        printf("%d \n",new_list[0]);           //pass(lowest)
    }else{
        printf("%d \n",new_list[fail_count-1]); //start from 0 --> (count-1)
        printf("%d \n",new_list[fail_count]);   //start from 0 --> (count-1+1)
    }

    return 0;
}
