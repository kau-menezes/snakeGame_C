#ifndef RENDER_MAP
#define RENDER_MAP

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "structs.h"

#define MAP_HEIGHT 40
#define MAP_WIDTH 40

void generate_apple(int map[MAP_HEIGHT][MAP_WIDTH], Apple *apple)
{
    srand(time(NULL)); 

    apple->current_position[0]= rand() % 40;
    apple->current_position[1] = rand() % 40;

    map[apple->current_position[1]][apple->current_position[0]] = apple->value;

}

void render_map(int map[MAP_HEIGHT][MAP_WIDTH])
{
    for (int i = 0; i < MAP_WIDTH + 2; i++) 
    {
        printf("[]");
    }
    

    printf("\n");

    for ( int i = 0; i < MAP_HEIGHT; i++)
    {
        printf("[]");

        for (int j = 0; j < MAP_WIDTH; j++)
        {
            if (map[i][j] == 0)
            {
                printf("  ");
            } else if (map[i][j] == 1) {
                printf(" @");
            } else if (map[i][j] == 9) {
                printf(" +");
            }
        }    
        
        printf("[]");
        printf("\n");
       
    }

    for (int i = 0; i < MAP_WIDTH + 2; i++) 
    {
        printf("[]");
    }

}

#endif // !RENDER_MAP