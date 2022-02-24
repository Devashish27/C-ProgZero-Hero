#include <stdio.h>

void printStr(char str[])
{
    int i=0;
    while (str[i]!='\0')
    {
        printf("%c", str[i]);
        i++;
    }

    printf("\n");

}

int main()
{
   // char str[] = {'t', 'y', 'r', 'o', 'n', '\0'};  // To check if its valid string or not...!

   // char str[07] = "tyron";

    char str[27];

    gets(str);

    printf("Using Custom Function printStr\n");

    printStr(str);

    printf("Using printf %s\n", str);

    printf(" Using puts: \n ");

    puts(str);

    return 0;

}

