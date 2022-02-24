#include <stdio.h>

int fib_recursive(int n){

    if(n==1 || n==2) {

        return n-1;

    }

    else{

        return fib_recursive(n-1) + fib_recursive(n-2);

    }

}


int fib_iterative(int n){

    int a = 0;
    int b = 1;

    for (int i = 0; i < n -1; i ++) {

        b = a + b;
        a = b - a;
    }

    return a;

}

int main()
{
    int number;
    printf("Enter a get to find Fibonacci series..!\n");
    scanf("%d", &number);
    printf("The Value Of Fibonacci Number At Position no %d using iterative approach is %d\n", number, fib_iterative(number));
    printf("The Value Of Fibonacci Number At Position no %d using recursive approach is %d\n", number, fib_recursive(number));
    return 0;
}
