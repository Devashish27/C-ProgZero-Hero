#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, sum = 0;
    int a[3][4], b[4][2], result[3][2];

    printf("Enter The First Matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // printf("Enter The %d %d Element for First Matrix\n", i, j);

            scanf("%d", &a[i][j]);
            // printf("\t");
        }

        // printf("\n");
    }

    printf("Enter The Second Matrix\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // printf("Enter The %d %d Element for First Matrix\n", i, j);

            scanf("%d", &b[i][j]);
            // printf("\t");
        }

        // printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // Calculate The Result..!
            for (int k = 0; k < 4; k++)
            {
                sum += a[i][k] * b[k][j];
            }

            result[i][j] = sum;
            sum = 0;
        }
    }

    // Print the resultant matrix...!
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // Printing The Result..!
            printf("%d\t", result[i][j]);
        }

        printf("\n\n");
    }

    return 0;
}
