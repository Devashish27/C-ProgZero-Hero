#include <stdio.h>
// #include "test.c"

// int sum;
// int sum = 424;

int myfunc(int a, int b)
{
    static int myVar;
    // auto int sum;
    // extern int sum;   // Here extern will be global variable and when it removed then it will be local variable.
    // int sum;
    myVar++;
    printf("The Sum is %d\n", myVar);

    // sum = a+b;
    return myVar;
}

// extern int sum = 102;
int main()
{
    // Declaration - Telling the compilier about the variable (No Space Reserved).
    // Definition -  Declaration + Space reservation.
    register int myVar = myfunc(3, 5);  // By default the sum will be 0.   // For register variable simply type register infront of variable.
    myVar = myfunc(3, 5);
    myVar = myfunc(3, 5);
    myVar = myfunc(3, 5);
    myVar = myfunc(3, 5);

    // printf("The Sum is %d\n", myVar);

    return 0;
}