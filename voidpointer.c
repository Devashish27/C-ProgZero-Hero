#include <stdio.h>
// #include <string.h>
int main()
{
    int a = 135;
    float b = 13.62;
    void *ptr;
    // ptr = &a;
    ptr = &b;
    // printf("The Value Of a is %d\n", *(  (int *)ptr  ));
    printf("The Value Of b is %f\n", *(  (float *)ptr  ));

    ptr = &a;
    printf("The Value Of a is %d\n", *(  (int *)ptr  ));

    return 0;
}
