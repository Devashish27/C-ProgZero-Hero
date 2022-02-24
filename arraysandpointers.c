#include <stdio.h>
int main()

{

    // int a = 27;    
    // int *ptra = &a;
    
    // char a = '2';    
    // char *ptra = &a;
    // printf("%d\n", ptra-2);
    // ptra++;

    // printf("%d\n", ptra);
    // ptra--;
    // printf("%d\n", ptra);
    // printf("%d", ptra-2);   // Pointer value will become 4 if you add +1 to it and it keeps on incrementing...!

    int arr[] = {111, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *arrayptr = arr;

    printf("Value of position 3 of array is %d\n", arr[3]);

    // printf("%d", arr[3]);
    printf("The Address of first element of the array is %d\n", &arr[0]);

    printf("The Address of first element of the array is %d\n", arr);  // This will print same address...!

    printf("The Address of second element of the array is %d\n", &arr[1]);

    printf("The Address of second element of the array is %d\n", arr + 1);  // This will print the same address....!

    printf("The Address of third element of the array is %d\n", &arr[2]);

    printf("The Address of third element of the array is %d\n", arr + 2);  // This will print the same address....!

    // arr--; // This line throws an error as this is contant.

    arrayptr++;

    printf("The Value Of Address of first element of the array is %d\n", *(&arr[0]));

    printf("The Value Of Address of first element of the array is %d\n", *(arr));  // This will print same address...!

    printf("The Value Of Address of second element of the array is %d\n",*( &arr[1]));

    printf("The Value Of Address of second element of the array is %d\n",*( arr + 1));  // This will print the same address....!

    return 0;
 
}
