#include <stdio.h>

int string_out_main(){
    // int pointer, string_count, tabulation, space;
    int pointer;
    // space_flag = 0;
    // string_count = 0;
    // tabulation = 0;
    // space = 0;
    while ((pointer = getchar()) != EOF)
    //     if (pointer == '\n')
    //         ++string_count;
    //     else if (pointer == '\t')
    //         ++tabulation;
    //     else if (pointer == ' ')
    //         ++space;
    // printf ("String count: %d;\nSpace count: %d;\nTabulation count: %d\n", string_count, space, tabulation);
        // if (pointer == ' ' && space_flag == 0){
        //     putchar(pointer);
        //     space_flag = 1;
        // } 
        // else if (pointer != ' '){
        //     space_flag = 0;
        //     putchar(pointer);
        // }
        if (pointer == '\t'){
            putchar(92);
            putchar('t');
        }
        else if (pointer == '\b'){
            putchar(92);
            putchar('b');
        }
        else if (pointer == 92){
            putchar('\\');
            putchar('\\');
        }
        else {
            putchar(pointer);
        }
    return 0;
}