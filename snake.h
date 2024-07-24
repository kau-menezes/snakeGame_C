#ifndef SNAKE
#define SNAKE

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "structs.h" 
#include "render_map.h" 

void snake_next_movement(Snake *snake)
{
    printf("alguma coisa");
    // dictates the snake's head next position by its direction
    switch (snake->direction)
    {
        case 0:
            snake->head->next_position[1] = snake->head->current_position[1] + 1;
            break;

        case 3:
            snake->head->next_position[0] = snake->head->current_position[0] + 1;
            break;

        case 6:
            snake->head->next_position[1] = snake->head->current_position[1] - 1;
            break;

        case 9:
            snake->head->next_position[0] = snake->head->current_position[0] - 1;
            break;
        
        default:
            break;
    }

    SnakeNode * current = snake->head->next;

    while (current->next != NULL)
    {
        current->next_position[0] = current->next->current_position[0];
        current->next_position[1] = current->next->current_position[1]; 

        current = current->next;
    }
    
}

void snake_movement(int map[MAP_HEIGHT][MAP_WIDTH], Snake *snake)
{
    printf("alguma coisa");

    SnakeNode * current = snake->head;

    while (current->next != NULL)
    {
        if (current == snake->head)
        {
            current->current_position[0] = current->next_position[0];
            current->current_position[1] = current->next_position[1];

        }

        current->current_position[0] = current->next->current_position[0];
        current->current_position[1] = current->next->current_position[1];

        // remove its previous space in the map
        map[current->current_position[1]][current->current_position[0]] = 0;
        
        // appears in its previously thought next position
        map[current->next_position[1]][current->next_position[0]] = snake->value;

        // itters trough the loop
        current = current->next;
    }


}

void verify_snake_snack(Snake *snake, Apple *apple)
{
    if (snake->head->current_position[0] == apple->current_position[0] && snake->head->current_position[0] == apple->current_position[0])
    {
        // points++;
    }
}

#endif // !SNAKE