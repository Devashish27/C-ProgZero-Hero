#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int a, i = 0;
    int * i2;

    while(i < 2644)
    {
        printf("Welcome TO Code Tyro\n");
        i2 = malloc(254 * sizeof(int));
        if(i%100 == 0)
        {
            getchar();
        }

        i++;
        free(i2); // Without this we will encounter a situation of memory leak...!!

    }

    return 0;
}
