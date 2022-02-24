#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("The Value Of argc is %d\n", argc);

    for(int i = 0; i < argc; i++)
    {
        printf("This Argument At Index Number %d has a value of %s \n", i, argv[i]);
    }

    return 0;
}
