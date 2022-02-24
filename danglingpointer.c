#include <stdio.h>
#include <stdlib.h>

int *functionDangling()
{
    int a, b, sum;
    a = 32;
    b = 68;
    sum = a+b;
    return &sum;
}

int main()
{   
    // Case 1: de-allocation of a memory block...
    int *ptr = (int *) malloc(7 *sizeof(int));
    ptr[0] = 18;
    ptr[1] = 36;
    ptr[2] = 53;
    ptr[3] = 21;
    
    free(ptr);  // ptr is now a dangling pointer.

    // Case-2: Function Returning Local Variable Address:
    int *dangPtr = functionDangling();  // dangPtr is now a dangling pointer.

    int *danglingPtr3;
    // Case-3: If A Variable Goes Out Of Scope...
    {
        int a = 53;
        
        danglingPtr3 = &a;
    }

    // Here Variable Goes Out Of Scope Which Means DanglingPtr3 Is Pointing To A Location Which Is Freed And Hence
    // Danglingptr3 is now a dangling pointer ...

    return 0;
}
