#ifndef SNAKE
#define SNAKE

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "structs.h" 

void snake_movement(Snake *snake)
{
    switch (snake->direction)
    {

    case 0:
        snake->next_position[1] = snake->current_position[1] + 1;
        break;

    case 3:
        snake->next_position[0] = snake->current_position[0] + 1;
        break;

    case 6:
        snake->next_position[1] = snake->current_position[1] - 1;
        break;

    case 9:
        snake->next_position[0] = snake->current_position[0] - 1;
        break;
    
    default:
        break;
    }

    
}

#endif // !SNAKE