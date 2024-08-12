#include <stdio.h>
#define IN 1
#define OUT 0

int arrays_main()
{
    int c, state, counter, i;
    counter = 0;
    // int words_counter, i;
    state = OUT;
    // int c_array[10];
    // for (i = 0; i < 10; ++i){
    //     c_array[i] = 0;
    // }
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t'){
            state = OUT;
            if (counter > 0){
                for (i = 0; i < counter; ++i){
                    printf("-");
                }
                printf("\n");
            }
        }
        else if (state == OUT){
            counter = 1;
            state = IN;
        }
        else if (state == IN){
            ++counter;
        }
    }
    return 0;
}