

// Rock , Paper and Scissors..


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int player;
    int computer = (rand() % 3);

    printf("Choose from 0 for Rock , 1 for Paper , 2 for Scissors\n");
    scanf("%d", &player);
    printf("computer choose: %d\n", computer);

    if (player == 0 && computer == 0)
    {
        printf("It's a draw!\n");
    }
    else if (player == 0 && computer == 1)
    {
        printf("You win!!\n");
    }
    else if (player == 0 && computer == 2)
    {
        printf("You lose!!\n");
    }
    else if (player == 1 && computer == 0)
    {
        printf("You lose!!\n");
    }
    else if (player == 1 && computer == 1)
    {
        printf("It's a draw!\n");
    }
    else if (player == 1 && computer == 2)
    {
        printf("You win!!\n");
    }
    else if (player == 2 && computer == 0)
    {
        printf("You win!!\n");
    }
    else if (player == 2 && computer == 1)
    {
        printf("You lose!!\n");
    }
    else if (player == 2 && computer == 2)
    {
        printf("It's a draw!\n");
    }
    else
    {
        printf("Something went wrong");
    }

    return 0;
}