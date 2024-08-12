#include <stdio.h>
#define UPPER 300
#define LOWER 0
#define STEP 20
int fahr_main(void){
    float fahr;
    
    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP){
        printf("Fahr: %3.0f , Celsi %6.1f\n", fahr, (5.0f/9.0f) * (fahr-32.0f));
    }
    return 0;
}