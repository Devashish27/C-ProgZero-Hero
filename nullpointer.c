# include <stdio.h>
# include <string.h>
int main()
{
    int a = 45;

    // int *ptr = &a;

    // int c = 86;
    int *ptr = NULL;

    // printf("The Address Of a is %d\n", ptr);
    if(ptr != NULL)
    printf("The Address Of a is %d\n", *ptr);
    else{
        printf("The Pointer Is A Null Pointer And Can't Be Dereferenced");

    }

    return 0;
}
