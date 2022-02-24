struct Driver
{
    char name[34];
    char dlNo[45];
    char route[47];
    int kms;
};

// typedef struct Driver   // You can write in this pattern as well..
// {
//     char name[34];
//     char dlNo[45];
//     char route[47];
//     int kms;
// }dr;

int main()
{
struct Driver d1, d2, d3;
printf("Enter the details of the Driver No 1\n");
printf("Enter the details of first driver\n");
scanf("%s", &d1.name);

printf("Enter the dlNo of first driver\n");
scanf("%s", &d1.dlNo);

printf("Enter the route of first driver\n");
scanf("%s", &d1.route);

printf("Enter the number of Kms of first driver\n");
scanf("%s", &d1.kms);


printf("Enter the details of the Driver No 2\n");
printf("Enter the details of second driver\n");
scanf("%s", &d2.name);

printf("Enter the dlNo of second driver\n");
scanf("%s", &d2.dlNo);

printf("Enter the route of second driver\n");
scanf("%s", &d2.route);

printf("Enter the number of Kms of second driver\n");
scanf("%s", &d2.kms);


printf("Enter the details of the Driver No 3\n");
printf("Enter the details of third driver\n");
scanf("%s", &d3.name);

printf("Enter the dlNo of third driver\n");
scanf("%s", &d3.dlNo);

printf("Enter the route of third driver\n");
scanf("%s", &d3.route);

printf("Enter the number of Kms of third driver\n");
scanf("%s", &d3.kms);


printf("**********Printing Information Of These Drivers:***********\n");
printf("For Driver No 1:\n Name is %s\n", d1.name);
printf("Dl number is %s\n", d1.dlNo);
printf("Route is %s\n", d1.route);
printf("Kms is %d\n", d1.kms);


printf("For Driver No 2:\n Name is %s\n", d2.name);
printf("D2 number is %s\n", d2.dlNo);
printf("Route is %s\n", d2.route);
printf("Kms is %d\n", d2.kms);

printf("For Driver No 3:\n Name is %s\n", d3.name);
printf("D3 number is %s\n", d1.dlNo);
printf("Route is %s\n", d3.route);
printf("Kms is %d\n", d3.kms);


}
