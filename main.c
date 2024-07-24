#include <stdio.h>
#include <stdlib.h>

#include "structs.h"
#include "render_map.h"
#include "snake.h"

int main()
{

    int map[MAP_HEIGHT][MAP_WIDTH];

    for ( int i = 0; i < MAP_HEIGHT; i++)
    {
        for (int j = 0; j < MAP_WIDTH; j++)
        {
            map[i][j] = 0;
     
        }
    }

    Snake snake = construct_snake();

    Apple apple = construct_apple();

    generate_apple(map, &apple);

    snake_movement(map, &snake);

    render_map(map);  
}