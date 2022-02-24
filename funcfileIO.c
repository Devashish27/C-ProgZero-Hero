#include <stdio.h>
// #include <stdlib.h>

int main()
{
    FILE *ptr = NULL;
    char string[64] = "This is awsome I am waiting";

    //************* Reading a File.. ***************!!
    // ptr = fopen("myfile.txt", "r");
    // fscanf(ptr, "%s", string);
    // printf("The Content Of This File has %s\n", string);


    // __________________Writing a File----------------------!!
    ptr = fopen("myfile.txt", "w");
    fprintf(ptr, "%s", string);


    // __________________Appending a File----------------------!!
    ptr = fopen("myfile.txt", "a");
    fprintf(ptr, "%s", string);


    return 0;
}