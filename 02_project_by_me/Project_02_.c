#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int snakeWaterGun(char you, char comp)
{
    // condition for draw
    if (you == comp)
    {
        return 0;
    }

    // condition for not draw
    if (you == 's' && comp == 'w')
    {
        return 1;
    }
    if (you == 'w' && comp == 's')
    {
        return -1;
    }
    if (you == 's' && comp == 'g')
    {
        return -1;
    }
    if (you == 'g' && comp == 's')
    {
        return 1;
    }
    if (you == 'w' && comp == 'g')
    {
        return 1;
    }
    if (you == 'g' && comp == 'w')
    {
        return -1;
    }
}

int main()
{
    char computer, you;
    int randomGen;
    srand(time(0));
    randomGen = rand() % 100 + 1;

    if (randomGen < 33)
    {
        computer = 's';
    }
    else if (randomGen > 33 && randomGen < 66)
    {
        computer = 'w';
    }
    else
    {
        computer = 'g';
    }

    printf("Choose snake(s), water(w), gun(g):");
    scanf("%c", &you);

    int Return = snakeWaterGun( you, computer);
    // printf("%d\n", Return);
    if(Return ==0){
        printf("MATCH IS DRAW!\n\n");
    }
    else if(Return == 1){
        printf("YOU WIN!\n\n");
    }
    else if(Return == -1){
        printf("YOU LOSE!\n\n");
    }
    else{
        printf("CHOOSE RIGHT CHARACTER!\n\n");
    }

    printf("******* You choosing: %c and Computer choosing: %c *******\n\n", you, computer);
    return 0;
};