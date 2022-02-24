#include <stdio.h>

void arrayRev(int arr[])
{
    int temp;
    for (int i = 0; i < 7/2; i++)
    {
        /* code */
        // swap item arr[i] with item arr[6-i]
        temp = arr[i];
        arr[i] = arr[6-i];
        arr[6-i] = temp;

    }
    
}

void arrayPrint(int arr[])
{
  
    for (int i = 0; i < 7; i++) 
    {
        printf("The Value Of Element %d is %d\n", i, arr[i]);

    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 67};

    printf("Before reversing the array\n");

    arrayPrint(arr)    ;
    
    arrayRev(arr);

    printf("\nAfter reversing the array\n");

    // for (int i = 0; i < 7; i++) 
    // {
    //     printf("The Value Of Element %d is %d\n", i, arr[i]);

    // }
    
    arrayPrint(arr);

    return 0;
}
