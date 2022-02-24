#include <stdio.h>
#include "callbyvalue.c"

// #include <stdio.h>   // This will give warning/error.

int main()
{
    int var = 0;

    int *ptr = functionDangling();

    printf("This is me: %d\n", var);

    return 0;
}
