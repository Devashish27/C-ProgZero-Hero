// // Rough examples of this game...!

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int generateRandomNumber(int n)
// {
//     srand(time(NULL)); //srand takes seed as an input and is defined inside stdlib.h
//     return rand() % n;
// }
// //Create Rock, Paper & Scissors Game
// // Player 1: rock
// // Player 2 (computer): scissors -->player 1 gets 1 point

// // rock vs scissors - rock wins
// // paper vs scissors - scissors wins
// // paper vs rock - paper wins
// // Write a C program to allow user to play this game three times with computer. Log the scores of computer and the player. Display the name of the winner at the end
// // Notes: You have to display name of the player during the game. Take users name as an input from the user.

// int main()
// {
//     char *ptr;
//     char *sam;
//     int name, game , i=0;
//     printf("Enter how many charector in your name:\n");
//     scanf("%d", &name);
//     ptr = (char *)malloc((name + 1) * sizeof(char));
//     printf("Enter the player name:\n");
//     scanf("%s", ptr);
//     printf("Player name is :%s\n", ptr);
//     while (i < 3)
//     {
//         sam = (char *)malloc(10 * sizeof(char));
//         printf("Attempt : %d \n Enter any Rock, Paper & Scissors\n",i+1);
//         scanf("%s", sam);
//         printf("%s  vs  ", sam);
//         game = generateRandomNumber(3);
//         switch (game)
//         {
//         case 0:
//             printf("rock\n");
//             break;
//         case 1:
//             printf("paper\n");
//             break;
//         case 2:
//             printf("scissors\n");
//             break;

//         default:
//             printf("wrong key enter\n");
//             break;
//         }
//         free(sam);
//         i=i+1;
//     }
//     // rock(0) vs scissors - rock wins
//     // paper vs scissors(2) - scissors wins
//     // paper(1) vs rock - paper wins
//     // if (game == 0)
//     // {
//     //     printf("")
//     //  }

//     printf("The random number between 0 to 2 is %d\n", generateRandomNumber(2));
//     return 0;
// }



// EXAMPLE-2

// #include<stdio.h>
// #include<stdlib.h>
// #include<String.h>
// #include<time.h>


// int random(){
//     srand(time(NULL));
//     return rand()%3;
// }


// int main()
// {
    
//     while(1){
        
//     int player=0;
//     int computer=0;
//     int draw=0;

    
//     // Taking name of user
//     char name[10];
//     printf("enter the player name: ");
//     scanf("%s",name);


//     // Taking users choice how many times he want to play
//     int op;
//     printf("Enter how many times do you want to play this game :");
//     scanf("%d",&op);




//     while(op>0){





    
    // rock=2,paper=1,scissor=0


//     printf("%s turn: \n",name);
//     int point;
//     scanf("%d",&point);
//     int val;
//     val = random();

//     // printf("now compuetrs turn: %d\n",val); // You can dis comment it if you want to show computer's choice
    
//     if((point==0 &&  val==1) ||(point==2 && val==0) || (point==1 && val==2)){
//     player ++;
//     }

//     else if((point==0 && val==2) || (point==1 && val==0) || (point==2 && val==1)){
//     computer ++;
//     }
    
//     else if(point==val){
//     draw ++;
//     }
//     op--;
//     }
        
//     if(player>computer){
//         int score=player-computer;
//         printf("%s win with %d : %d\n",name,player,computer);
//     }
    
//     else if(player<computer){
//         int score=computer-player;
//         printf("computer win with %d : %d\n",computer,player);
//     }
//     printf("Do you want to play this game again\nPress 1 for Yes and 0 for No\n");
//     int newgame;
//     scanf("%d",&newgame);
//     if (newgame==1) {
//         continue;
//     }
    
//     else
//     {
//         break;
//     }
    
    
//     }
//     return 0;
// }




// EXAMPLE-3:
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;  
}
int main()
{
    char Player1name[50];
    int n,r;
    printf("WELCOME TO OUR GAME ROCK,PAPER AND SCISSORS\n");
    printf("Player1name:");
    scanf("%s", Player1name);
    printf("Player2name:computer\n");

    printf("\nEnter 0 to choose rock,\nEnter 1 for paper\nEnter 2 for scissors\n");
    /*
    rock vs scissors=rock         0 vs 2 =0
    paper vs scissors=scissors      1 vs 2=2
    paper vs rock=paper           1 vs 0=1 
    */
static int p=0;
       
        static int c=0;
    for (int i = 1; i <= 3; i++)
    {
        printf("\nPLAY GAME %d TIME\n", i);
        printf("\n%s's turn:", Player1name);
        scanf("%d", &n);
        r=generateRandomNumber(3);
        printf("Computer's turn:%d\n",r);
        

       if (n==0&&r==2)
       {  
            p++;
           printf("%s :%d\n",Player1name,p);
           printf("computer:%d\n",c);
           
       }
       else if (n==2&&r==0)
       {   
           c++;
           printf("%s :%d\n",Player1name,p);
           printf("computer:%d\n",c);
       }
       else if (n==1&&r==2)
       {
           c++;
           printf("%s :%d\n",Player1name);
           printf("computer:%d\n",c);
       }
       else if (n==2&&r==1)
       {    
           p++;
           printf("%s :%d\n",Player1name,p);
           printf("computer:%d\n",c);
           
       }

       if (n==1&&r==0)
       {  
            p++;
           printf("%s :%d\n",Player1name,p);
           printf("computer:%d\n",c);
           
       }
       else if (n==0&&r==1)
       {   
           c++;
           printf("%s :%d\n",Player1name,p);
           printf("computer:%d\n",c);
       }

       else if (n==r)
       {
           printf("draw\n");
            printf("%s :%d\n",Player1name,p);
           printf("computer:%d\n",c);
              
       }

    }
if (p>c)
{
   printf("you won!\n");
}
else if (p==c)
{
    printf("match is draw ! sorry play again\n");
}

else 
{
   printf("computer won!\n");
}
    return 0;
}
