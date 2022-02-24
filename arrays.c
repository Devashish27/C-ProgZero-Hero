#include <stdio.h>

int main()
{

    // printf("Hello Aliens!!\n");
    // int marks[4];
    int marks[2][4] = {{12, 32, 43, 52},
                       {1, 3, 6, 8}};

    // for(int i=0; i<4; i++) {

    //     printf("Enter the value of %d element of the array\n ", i);
    //     scanf("%d", &marks[i]);

    // }

    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 4; j++)
        {

            // printf("The value of %d, %d element of the array is %d\n ", i, j, marks[i][j]);
            // scanf("%d", &marks[i]);
            printf("%d ", marks[i][j]);

        }

        printf("\n");
        
    }

    // marks[0] = 32;
    // printf("Marks of student 1 is %d: \n", marks[0]);

    // marks[0] = 22;
    // marks[1] = 32;
    // marks[2] = 42;
    // marks[3] = 52;

    // printf("Marks of student 1 is %d: \n", marks[0]);

    return 0;
}
