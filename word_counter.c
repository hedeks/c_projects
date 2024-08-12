#include <stdio.h>

#define IN 1
#define OUT 0

int word_counter_main()
{
    // int c, nl, nw, nc, state;
    int c, state;
    state = OUT;
    // nl = nw = nc = 0;
    while ((c = getchar()) != EOF){
        // ++nc;
        // if (c == '\n'){
        //     ++nl;
        // }
        if (c == ' ' || c == '\n' || c == '\t'){
            if (state == IN){
                putchar('\n');
            }
            state = OUT;
        }
        else if (state == OUT){
            state = IN;
            putchar(c);
        }
        else if (state == IN){
            putchar(c);
        }
    }
    return 0;
    // printf("%d %d %d\n", nl, nw, nc);
}