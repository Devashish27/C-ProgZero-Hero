#include <stdio.h>

void function(char array[])
{
    for (int i = 4; i < 32; i++)
    {
        printf("%c", array[i]);
       
    }
}

int main()
{
    char arr[] = "<h1> This is largest heading tag</h1>" ;
    function(arr);
    return 0;
}
