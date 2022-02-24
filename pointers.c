#include<stdio.h>

int main() {

    printf("Learn pointers now..!!\n");
    int a = 76;
    int *ptra = &a;
    int *ptr2 = NULL;

    // printf("The Value Of a is %d\n", *ptra);
    // printf("The Value Of a is %x\n", *ptra);  // for printing address of a.
    printf("The address of pointer to a is %p\n", &ptra);
    // printf("The Value Of a is %p\n", *ptra);
    printf("The Value Of a is %d\n", *ptra);
    printf("The Value Of a is %p\n", ptra);
    printf("The Address Of some garbage is %p\n", ptr2);
    printf("The Value Of a is %p\n", &a);
    printf("The Value Of a is %d\n", a);
    return 0;

}

