#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int n)
{
    srand(time(NULL)); // srand takes seed as an input and is defined inside stdlib.h
    return rand() % n;
}

int greater(char char1, char char2)
{
    // For Rock, Paper, Scissors - Returns 1 if c1>c2 and 0 otherwise. If c1==c2 it will return -1.
    if (char1 == char2) 
    {
        return -1;
    }

    else if((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }
    else if((char2 == 'r') && (char1 == 's'))
    {
        return 0;
    }

    
    else if((char1 == 'p') && (char2 == 'r'))
    {
        return 1;
    }
    else if((char2 == 'p') && (char1 == 'r'))
    {
        return 0;
    }


    else if((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }
    else if((char2 == 's') && (char1 == 'p'))
    {
        return 0;
    }
}


int main()
{

    int playerScore = 0, compScore = 0, temp;
    char playerChar, compChar;
    char dict[] = {'r', 'p', 's'};

    printf("Welcome To The Rock , Paper And Scissors.\n");
    for (int i = 0; i < 3; i++)
    {

        // Take Player-1's Input..!
        printf("Player-1's Turn:\n");
        printf("Choose 1 for Rock, 2 for Paper and 3 for Scissors.\n Player 1:");
        scanf("%d", &temp);
        getchar();
        playerChar = dict[temp - 1];
        printf("You Chose %c\n\n", playerChar);

        // Generate Computer's Input..!
        printf("Computer's Turn:\n");
        printf("Choose 1 for Rock, 2 for Paper and 3 for Scissors\n");
        temp = generateRandomNumber(3) + 1;
        compChar = dict[temp - 1];
        printf("Machine Chose %c\n", compChar);


    // Compare the score..!
        if (greater(compChar, playerChar) == 1)
        {
            compScore += 1;
            printf("Machine Got it!\n\n");
        }

        else if (greater(compChar, playerChar) == -1)
        {
            compScore += 1;
            playerScore += 1;
            printf("Game Is Draw!\n\n");

        }

        else
        {
            playerScore += 1;
            printf("You Got It!\n\n");

        }

        printf("You: %d\n Machine: %d\n\n", playerScore, compScore);

    }


    if (playerScore > compScore)
    {
        printf("You Win The Game\n\n");
    }
    else if (playerScore < compScore)
    {
        printf("Machine Win The Game\n\n");
    }
    else {
        printf("Game Is Draw!!\n\n");
    }

    return 0;
}
