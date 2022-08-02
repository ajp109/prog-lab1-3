#include "mbed.h"

int main()
{
    int var = 10;
    
    printf("var: %d\n", var);
    if (var > 6) {
        printf("var is greater than 6\n");
    }
    
    var = 3;
    
    printf("var: %d\n", var);
    if (var < 5) {
        printf("var is less than 5\n");
    }


    // Do nothing, forever...
    while (true);
}
