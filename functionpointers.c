#include <stdio.h>
#include <stdlib.h>

int Sum(int a, int b)
{
    return a + b;
}

void greet()
{
    printf("Hello Janu, how you? %d\n");
}

int main()
{
    // int a; 
    printf("The Sum Of 2 and 7 is %d\n", Sum(2, 7));  // Testing the function!!
    // int sumForVar = 16;
    // sumForVar
    int (*fPtr) (int, int);  // Declaring a function pointer..!
    fPtr = &Sum; // Creating a function pointer..
    int d = (*fPtr)(4, 2); // Dereferencing a function pointer
    printf("The Value of d is %d\n", d);

    return 0;
}
