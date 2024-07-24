#ifndef SNAKE
#define SNAKE

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "structs.h" 
#include "render_map.h" 

void getting_to_the_tail(int map[MAP_HEIGHT][MAP_WIDTH], SnakeNode * node, SnakeNode * old_position)
{
    if (node == NULL)
    {
        map[old_position->current_position[1]][old_position->current_position[0]] = 0;
        return;
    }

    getting_to_the_tail(map, node->next, node);

    node->current_position[0] = old_position->current_position[0];
    node->current_position[1] = old_position->current_position[1];

}

void snake_next_movement(int map[MAP_HEIGHT][MAP_WIDTH], Snake *snake)
{
    printf("alguma coisa");

    SnakeNode head_copy = *snake->head;

    // dictates the snake's head next position by its direction
    switch (snake->direction)
    {
        case 12:
            snake->head->current_position[0] = snake->head->current_position[0] - 1;
            break;

        case 3:
            snake->head->current_position[1] = snake->head->current_position[1] + 1;
            break;

        case 6:
            snake->head->current_position[0] = snake->head->current_position[0] + 1;
            break;

        case 9:
            snake->head->current_position[1] = snake->head->current_position[1] - 1;
            break;
        
        default:
            break;
    }

    getting_to_the_tail(map, snake->head->next, &head_copy);

}

void snake_movement(int map[MAP_HEIGHT][MAP_WIDTH], Snake *snake)
{

    SnakeNode * current = snake->head;

    while (current != NULL)
    {
        
        // appears in its previously thought next position
        map[current->current_position[1]][current->current_position[0]] = snake->value;

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