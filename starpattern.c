// Regular right angle..!

/*
#include <stdio.h>

int main()
{

    int i, j, rows;

    printf("Enter Number Of Rows By User: ");

    scanf("%d", &rows);

    for (i = 1; i <= rows; i ++)
    {

        for (j = 1; j <= i; j ++)
        {

            printf("*");

        }

        printf("\n");

    }

    return 0;
}
*/


// For reverse right angle triangle...!

#include <stdio.h>

int main()
{

    int i, j, rows;

    printf("Enter Number Of Rows By User: ");

    scanf("%d", &rows);

    for (i = rows; i >= 1; i --)
    {

        for (j = 1; j <= i; j ++)
        {

            printf("* ");

        }

        printf("\n");

    }

    return 0;
}
