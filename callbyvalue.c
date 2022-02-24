# include <stdio.h>
//#include "callbyvalue.c.h"

/*void changeValue(int* address)
{
    *address = 785;
}

int main()
{
    int a = 26, b = 68;
    printf("The value of now is %d\n", a);
    changeValue(&a);
    printf("The value of now is %d\n", a);

    return 0;

}
*/

// Given two numbers a and b, add them then substract them and assign them to a and b using call by reference.

#include <stdio.h>
//fuction(Call by reference) for add or subtract
void addSub(int *a1, int *b1)
{
    int temp;
    temp = *a1;
    *a1 = *a1 + *b1;
    *b1 = temp - *b1;

    return;
}

int main()
{
    //variable declaration
    int a = 8, b = 6;
    //print to user
    printf("Before running the function, the value of a = %d and value of b = %d\n", a, b);
    //function call for change the values
    addSub(&a, &b);
    //after using function print to user
    printf("After running the function, the value of a = %d and value of b = %d\n", a, b);

    return 0;
}



// Another method...!

a = 4
b = 3

after running the function, the values of a and b should be:
a = 7
b = 1
*/

void callbyref(int *x, int *y)
{
    *x=*x+*y;
    *y=(*x-*y)-*y;
}
int main()
{
    int a,b;
    printf("Enter value of a and b: ");
    scanf("%d%d",&a,&b);
    callbyref(&a,&b);
    printf("The values of a=%d and b=%d",a,b);
    return 0;
}
