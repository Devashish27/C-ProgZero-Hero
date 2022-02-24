# include<stdio.h>

int main() {

int age, marks ;
printf("Enter your age\n");

scanf("%d", &age);

printf("Enter your marks\n");

scanf("%d", &marks);

switch (age) {

    case 3: 

        printf("Age is 3: \n");
        switch (marks) {

            case 45: 
                printf("Your marks are 45: ");
                break;
            
            default:
                printf("Your marks are not 45: ");

        }
        
        break;

     case 13: 

        printf("Age is 13: \n");
        break;

 case 23: 

        printf("Age is 23: \n");
        break;

    default:  
    printf("Age is not 3, 13 and 23: \n");

        break;  

}



return 0;

}
