// Using Euclerian etc...!
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float Edistance(int x1, int y1, int x2, int y2)
{
    int a = (y2-y1) * (y2-y1) + (x2-x1) * (x2-x1);

    return sqrt(a);
}

float areaOfCircle(int x1, int y1, int x2, int y2, float (*distance)(int x1, int y1, int x2, int y2))
{
    return distance(x1, y1, x2, y2);
}

int main()
{
    float x1, y1, x2, y2, dst;

    //Take x1, y2 and x2, y2 using scanf from user.
    printf("Enter Value Of x1\n");
    scanf("%d", &x1);

    printf("Enter Value of y1\n");
    scanf("%d", &y1);
    
    printf("Enter Value Of x2\n");
    scanf("%d", &x2);
    
    printf("Enter Value Of y2\n");
    scanf("%d", &y2);
    dst = areaOfCircle(x1, y1, x2, y2, Edistance);
    printf("The Distance Between These Points Is %.2f\n", dst);

    return 0;
}



// Example-1:
// #include <stdio.h>
// #include <math.h>
// #define PI 3.14

// float Edistance(int x1, int y1, int x2, int y2)
// {
//     int a = (y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1);
//     return sqrt(a);
// }

// float CircleArea(int x1, int y1, int x2, int y2, float (*fptr)(int, int, int, int))
// {
//     float p, q;
//     p = fptr(x1, y1, x2, y2);
//     q = p;
//     return (PI * q * q);
// }

// int main()
// {
//     int x1, x2, y1, y2;
//     float dst;
//     printf("enter the value of x1\n");
//     scanf("%d", &x1);
//     printf("enter the value of y1\n");
//     scanf("%d", &y1);
//     printf("enter the value of x2\n");
//     scanf("%d", &x2);
//     printf("enter the value of y2\n");
//     scanf("%d", &y2);

//     dst = Edistance(x1, y1, x2, y2);
//     printf("distance between two points = %f\n", dst);
//     float (*fptr)(int, int, int, int);
//     fptr = &Edistance;
//     float g;
//     g = CircleArea(x1, y1, x2, y2, fptr);
//     printf("the area of circle is %f\n", g);
//     return 0;
// }