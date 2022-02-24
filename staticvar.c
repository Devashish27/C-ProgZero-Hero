#include <stdio.h>

int b = 27;

int ret()
{
    return 25*2;
}

int func1(int b1) 
{  
    static int myvar = ret(); 
    // static int myvar = 0;
    printf("The Value Of Myvar is %d\n", myvar);
    myvar++;
    // int loc = 89;
    // printf("The Value Of b inside func1 is %d\n", b);
    // return 34;
    // printf("The Address Of b inside func1 is %d\n", &b);
    // return b1* 11;                                   

    return b1 + myvar;

}

int main()
{

    int b = 143;
    // printf("%d", loc);
    // printf("The Address Of b inside main is %d\n", &b);

    int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);

    int *ptr = &val;

    // printf("The Value Of Func1 is %d", func1());

    // printf("The Value Of Func1 is %d\n", val);

    return 0;
}
