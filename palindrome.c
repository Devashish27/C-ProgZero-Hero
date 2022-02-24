// #include <stdio.h>
// #include <stdlib.h>

// int isPalindrome(int num)
// {
//     int reversed = 0;
//     int originalNumber = num;

//     // Lets reverse the number..!
//     while (num != 0)
//     {
//         reversed = reversed * 10 + num % 10;
//         num = num / 10;
//     }

//     // 877 % 10 = 778
//     // 8

//     printf("The Reversed Number Is %d\n", reversed);

//     if (originalNumber == reversed)
//     {

//         return 1;
//     }

//     else
//     {

//         return 0;
//     }
// }

// int main()
// {
//     int number;
//     printf("Enter a number to check whether it is a palindrome or not \n");
//     scanf("%d", &number);

//     // Your task is to implement this function..!
//     if (isPalindrome(number))
//     {
//         printf("This number is a palindrome\n");
//     }
//     else
//     {
//         printf("This number is not a palindrome\n");
//     }

//     return 0;
// }



// String Version In Palindrome...!
#include <stdio.h>
#include <string.h>
int ispalindrome(char str1[])
{
    int a=0;
    printf("%d\n",strlen(str1));
    for (int i = 0; i < strlen(str1) / 2; i++)
    {
        if (str1[i] == str1[strlen(str1) - 1-i])
        {
            a++;
            
            continue;

            
        }
        else
        {
            break;
        }
    }
    if(a==strlen(str1)/2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    

    
}
int main()
{
    char str[50];
    printf("Enter the string \n");
    scanf("%s", &str);
    getchar();
    if (ispalindrome(str))
    {
        printf("this string is palindrome\n");
    }
    else
    {
        printf("string is not palindrome");
    }
    return 0;
}
