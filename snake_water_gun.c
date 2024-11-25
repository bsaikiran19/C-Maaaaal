#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(0));
    int player, computer = (rand() % 3);
    // 0 --> Snake
    // 1 --> Water
    // 2 --> Gun
    printf("Choose 0 for snake, 1 for water, and 2 for gun : \n");
    scanf("%d", &player);

    printf("Opponent chose %d\n", computer);
    if (player == 0 && computer == 0)
    {
        printf("Its a DRAW !!!\n");
    }
    else if (player == 0 && computer == 1)
    {
        printf("Snake drank all the water. You Won !!!\n");
    }
    else if (player == 0 && computer == 2)
    {
        printf("Booooom!! Your Snake got killed by Gun. You lost to computer !!!\n");
    }
    else if (player == 1 && computer == 0)
    {
        printf("Snake drank all the water. You lost to computer !!!\n");
    }
    else if (player == 1 && computer == 2)
    {
        printf("You pushed the gun in the water , Gun sank into water. You won !!!\n");
    }
    else if (player == 1 && computer == 1)
    {
        printf("Its a DRAW !!!\n");
    }
    else if (player == 2 && computer == 2)
    {
        printf("Its a DRAW !!!\n");
    }
    else if (player == 2 && computer == 0)
    {
        printf("Booooom!! You killed the Snake with your Desert Eagle. You Won !!!\n");
    }
    else if (player == 2 && computer == 1)
    {
        printf("Hello friend I am onder the bawter Please help me!!, Your Gun sank into water. You lost !!!\n");
    }
    else
    {
        printf("Invalid, Something went wrong !!");
    }
    return 0;
}