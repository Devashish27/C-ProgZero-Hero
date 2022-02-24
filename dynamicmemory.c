#include<stdio.h>

struct Driver{

    char name[34];
    char dlNo[45];
    char route[47];
    int kms;

};

int main()
{
    struct Driver d1, d2, d3;
    printf("Enter the details of driver\n");

    printf("Enter the details of first driver\n");
    scanf("%s", d1.name);

    printf("Enter the details of first driver\n");
    scanf("%s", d1.dlNo);

    printf("Enter the details of first driver\n");
    scanf("%s", d1.route);

    printf("Enter the number of Kms of first driver\n");
    scanf("%s", d1.kms)

    return 0;
}
