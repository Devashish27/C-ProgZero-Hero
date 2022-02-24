#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 234;
    int *ptr; // This is wild pointer..
    // *ptr = 52; // This is not a good thing to do..
    ptr = &a;  // ptr is no longer a wild pointer....
    printf("The Value Of a is %d\n", *ptr);

    return 0;
}
