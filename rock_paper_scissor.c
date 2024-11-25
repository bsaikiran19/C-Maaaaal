#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{

    /*
    0 -->Rock
    1 --> Paper
    2 --> Scissor
    */
    srand(time(0));
    int player, computer = (rand() % 3);
    printf("Choose 0 for rock, 1 for paper  and 2 for scissor : \n ");
    scanf("%d", &player);

    printf("Opponent chose : %d \n", computer);
    if (player == 0 && computer == 0)
    {
        printf("Its a DrAw !! \n");
    }
    else if (player == 0 && computer == 1)
    {
        printf("Paper ne stone ko pakad liya !!!. You Lost!\n");
    }
    else if (player == 0 && computer == 2)
    {
        printf("Phod diya bc scissor ka !!. You Won !!\n");
    }
    else if (player == 1 && computer == 0)
    {
        printf("Paper ne stone ko pakad liya !!!. You Won!!!\n");
    }
    else if (player == 1 && computer == 2)
    {
        printf("Paper ne apni katwa lee!! #maksad !!. You Lost\n");
    }
    else if (player == 1 && computer == 1)
    {
        printf("Its a DrAw !! \n");
    }
    else if (player == 2 && computer == 2)
    {
        printf("Its a DrAw !! \n");
    }
    else if (player == 2 && computer == 0)
    {
        printf("Phod diya bc scissor ka !!. You Lost !!\n");
    }
    else if (player == 2 && computer == 1)
    {
        printf("Paper ne apni katwa lee!! #maksad !!. You Won !!\n");
    }
    else
    {
    }

    return 0;
}