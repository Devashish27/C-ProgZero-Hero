#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int i;

void array(int arr[])
{
   int temp;

   for( i=0;i<7/2;i++)
   {

      temp = arr[i];
      arr[i]=arr[6-i];
      arr[6-i]=temp;

   }
}

int main()
{

   int arr[]  = {1,2,3,4,5,6,67};
   array(arr);

   for(i=0;i<7;i++)
   printf("%d ",arr[i]);

   return 0;

}

//output:67 6 5 4 3 2 1
