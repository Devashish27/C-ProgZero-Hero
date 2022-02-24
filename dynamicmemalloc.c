// This is dynamic array with maloc and caloc..!

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // // Use of malloc
    // int *ptr;
    // int n;
    // printf("Enter the size of the array you want to create\n");
    // scanf("%d", &n);

    // ptr = (int *)malloc(3 * sizeof(int));

    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value no %d of this array \n", i);

    //     scanf("%d", &ptr[i]);
    // }

    // for (int i = 0; i < n; i++)  // Here i < 4 or more will generate garbage value as required value is 3 or less.
    // {
    //     printf("The Value At %d of this array is %d\n", i, ptr[i]);

    //     // scanf("%d", &ptr[i]);
    // }

    // Use of calloc
    // int *ptr;
    // int n;
    // printf("Enter the size of the array you want to create\n");
    // scanf("%d", &n);

    // ptr = (int *)calloc(n, sizeof(int));

    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value no %d of this array \n", i);

    //     scanf("%d", &ptr[i]);
    // }

    // // If you comment above for loop and run it the values which have assigned it will be assign it to 0.

    // for (int i = 0; i < n; i++)  // Here i < 4 or more will generate garbage value as required value is 3 or less.
    // {
    //     printf("The Value At %d of this array is %d\n", i, ptr[i]);

    //     // scanf("%d", &ptr[i]);
    // }


    // Content from calloc..
    int *ptr;
    int n;
    printf("Enter the size of the array you want to create\n");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array \n", i);

        scanf("%d", &ptr[i]);
    }

    // If you comment above for loop and run it the values which have assigned it will be assign it to 0.

    for (int i = 0; i < n; i++)  // Here i < 4 or more will generate garbage value as required value is 3 or less.
    {
        printf("The Value At %d of this array is %d\n", i, ptr[i]);

        // scanf("%d", &ptr[i]);
    }

    // Use of realloc
    printf("Enter the size of the new array you want to create\n");
    scanf("%d", &n);

    ptr = (int *)realloc(ptr, n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the new value no %d of this array \n", i);

        scanf("%d", &ptr[i]);
    }

    // If you comment above for loop and run it the values which have assigned it will be assign it to 0.

    for (int i = 0; i < n; i++) // Here i < 4 or more will generate garbage value as required value is 3 or less.
    {
        printf("The New Value At %d of this array is %d\n", i, ptr[i]);

        // scanf("%d", &ptr[i]);
    }

    free(ptr);  //This will freeup the memory..

    return 0;
}
