#include <stdio.h>

void swap(int *x, int *y) {

int temp;

temp = *x;
*x = *y;
*y = temp;
return;
}

int main() {

int a = 27, b = 53;

printf("%d and %d\n", a, b);
swap(&a, &b);

printf("%d and %d\n", a, b);
return 0;

}
