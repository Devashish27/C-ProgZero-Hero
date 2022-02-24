#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    // ptr = fopen("myfile.txt", "r+");
    // ptr = fopen("myfile.txt", "w");
    ptr = fopen("myfile.txt", "w+");



    // char * c = fgetc(ptr);

    // printf("The Character I read was %c\n", c);

    // c = fgetc(ptr);
    // printf("The Character I read was %c\n", c);


    char str[4]; 
    
    fgets(str, 5, ptr);

    printf("The String is %s\n", str);


    // fputc('o', ptr);
    // fputs("Its a fantastic day ", ptr);


    fclose(ptr);
    return 0;

}
