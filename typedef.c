#include <stdio.h>

typedef struct Student
{
    int id;
    int marks;
    char fav_color;
    char name[34];
} std;

int main()
{

    // int *a, b;
    typedef int *intPointer;
    intPointer a, b;
    int c = 89;
    a = &c;
    b = &c;

    // struct Student s1, s2;
    // s1.id = 25;
    // s2.id = 64;

    // printf("Value of s1's Id is %d\n", s1.id);
    // printf("Value of s2's Id is %d\n", s2.id);

    // typedef <previous_name> <alias_name>;
    // typedef unsigned long ul;
    // typedef int integer;

    // ul l1, l2, l3;
    // integer a = 4;
    // printf("Value of a is %d", a);

    return 0;
}
