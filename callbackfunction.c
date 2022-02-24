#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a+b;    
}

void greetHelloAndExecute(int (*fptr)(int, int)){
    
    printf("Hello User\n");

    printf("The Sum Of 2 and 7 is %d\n", fptr(2, 7));

}

void greetGmAndExecute(int (*fptr)(int, int)){
    
    printf("Good Morning User\n");

    printf("The Sum Of 2 and 7 is %d\n", fptr(2, 7));

}


int main()
{
    int (*ptr)(int ,int);
    ptr = sum;
    // greetGmAndExecute(ptr);
    greetHelloAndExecute(ptr);
    return 0;
}
