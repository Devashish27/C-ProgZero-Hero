#include <stdio.h>

int main()
{

    char input;

    float kmsToMiles = 0.621371;
    float inchesToFoot = 0.0833333;
    float cmsToInches = 0.393701;
    float poundToKgs = 0.453592;
    float inchesToMeters = 0.0254;
    float first, second;

    while (1)
    {
        printf("Enter the input character. q to quit \n, 1. kms to miles \n, 2. inches to foot \n, 3. cms to inches \n, 4. pounds to kgs \n, 5. inches to meters \n");

        scanf("%c", &input);

        switch (input)
        {
        case 'q':
            printf("Quitting the program now..!!");
            goto end;
            break;

        case '1':
            printf("Enter Quantity In Terms Of First Unit\n");
            scanf("%f", &first);
            second = first * kmsToMiles;
            printf("%f Kms is equal to %f Miles \n, first, second");
            break;

        case '2':

            printf("Enter Quantity In Terms Of First Unit\n");
            scanf("%f", &first);

            second = first * inchesToFoot;
            printf("%f Inches is equal to %f Foot \n, first, second");
            break;

        case '3':

            printf("Enter Quantity In Terms Of First Unit\n");
            scanf("%f", &first);

            second = first * cmsToInches;
            printf("%f Cms is equal to %f Inches \n, first, second");
            break;

        case '4':

            printf("Enter Quantity In Terms Of First Unit\n");
            scanf("%f", &first);

            second = first * poundToKgs;
            printf("%f Pounds is equal to %f Kgs \n, first, second");
            break;

        case '5':

            printf("Enter Quantity In Terms Of First Unit\n");
            scanf("%f", &first);

            second = first * inchesToMeters;
            printf("%f Inches is equal to %f Meters \n, first, second");
            break;

        default:
            break;
        }
    }
end:

    /*
    kms to miles
    inches to foot
    cms to inches
    pounds to kgs
    inches to meters
*/

    return 0;
}
