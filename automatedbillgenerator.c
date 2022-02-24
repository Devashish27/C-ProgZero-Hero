#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *replaceWord(const char *str, const char *oldWord, const char *newWord)
{
    char *resultString;
    int i, count = 0;
    int newWordLength = strlen(newWord);
    int oldWordLength = strlen(oldWord);

    // Let's count number of words in the string....!
    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], oldWord) == &str[i])
        {
            count++;

            // Jump Over this word.!
            i = i + oldWordLength - 1;
        }
    }

    // Making a new String to fit in the replaced words..!
    resultString = (char *)malloc(i + count * (newWordLength - oldWordLength) + 1);

    i = 0;
    while (*str)
    {
        // Compared The Substring With Result..!
        if (strstr(str, oldWord) == str)
        {
            strcpy(&resultString[i], newWord);
            i += newWordLength;
            str += oldWordLength;
        }

        else
        {
            resultString[i] = *str;
            i += 1;
            str += 1;
        }
    }

    resultString[i] = '\0';
    return resultString;
}

int main()
{
    FILE *ptr = NULL;
    FILE *ptr2 = NULL;

    ptr = fopen("bill.txt", "r");
    ptr2 = fopen("GenBill.txt", "w");

    char str[1100];
    fgets(str, 1100, ptr);
    printf("The given bill template was: %s\n", str);

    // Call the replace Word Function And Generate newStr...!
    char *newStr;
    newStr = replaceWord(str, "{{item}}", "Shoes");
    newStr = replaceWord(newStr, "{{Outlet}}", "Hello Everyone!! Welcome Back!");
    newStr = replaceWord(newStr, "{{name}}", "Tyron");
    printf("The Actual bill Generated Is: %s\n", newStr);
    printf("The Generated bill Has Been Writtern To The File GenBill.txt\n");


    fprintf(ptr2, "%s", newStr);
    fclose(ptr);
    fclose(ptr2);

    return 0;
}
