# include<stdio.h> 
    
int main()
{

    // label:
    //     printf("Hello Aliens\n");
    //     goto end;

    // printf("You are biggest moron going around girls...!!");
    // goto label;
   
    // end:
    //     printf("We are the end!!: ");

    // Nested For-loop
    for (int i = 0; i < 8; i++) {

        printf("%d\n", i); 

        int num;

        for(int j = 0; j < 8; j++) {

            printf("Enter The Number. Enter 0 to exit:\n ");

            scanf("%d\n", &num);

            if(num==0){
            
                goto end;
                // break;

            }
        }
    
    }
    end:
        

    return 0;

}
    