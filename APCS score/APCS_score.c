#include <stdio.h>
#define arr_max 20
#define DBG 0 //normal:0, check output:1, check sorting:2

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

        #if (DBG==1)
        printf("reading in: %d\n",list[read_in]);
        #endif

        do{
            if(read_in == 0){       //first input
                new_list[0] = temp;
                keep_on = 0;

                #if (DBG==1)
                    for(int i = 0 ; i < input_count ; i++){
                        printf("%d ",new_list[i]);
                    }
                    printf("\n");
                #endif

            }else{                  //inputs after 1st
                if(temp > new_list[compare_with]){
                    compare_with++;                 //find its place

                    #if (DBG==1)
                    printf("comparing with:%d\n",compare_with);
                    #endif

                }else{
                    for(int i = input_count-1; i >= compare_with;i-- ){
                        new_list[i] = new_list[i-1];

                        #if (DBG==2)
                        printf("tracking input:%d\n",i);
                        printf("number:%d\n",new_list[compare_with]);
                        printf("comparing with:%d\n",compare_with);
                        printf("\n");
                        #endif
                    }

                    new_list[compare_with] = temp;
                    keep_on = 0;

                    #if (DBG==2)
                    for(int i = 0 ; i < input_count ; i++){
                        printf("%d ",new_list[i]);
                    }
                    printf("\n");
                    printf("\n");
                    #endif



                    #if (DBG==1)
                    for(int i = 0 ; i < input_count ; i++){
                        printf("%d ",new_list[i]);
                    }
                    printf("\n");
                    #endif

                }
            }

        }while(keep_on);
    }

    //--------------------------------------------printing results
    #if (DBG==0)
    for(int i = 0 ; i < input_count ; i++){
        printf("%d ",new_list[i]);
    }
    printf("\n");
    #endif

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

/*
    //--------------------------------------------finding highest fail
    int fail_number;
    for(fail_number = 0 ; new_list[fail_number] < 60 ; fail_number++){}

    if(fail_number == 0){
        printf("best case");
    }else{
        printf("%d",new_list[fail_number]);
    }

    //--------------------------------------------finding lowest pass
    int pass_number;
    for(pass_number = 0 ; new_list[pass_number] >= 60 ; pass_number++){}

    if(pass_number == 0){
        printf("worst case");
    }else{
        printf("%d",new_list[pass_number]);
    }
*/
    return 0;
}
