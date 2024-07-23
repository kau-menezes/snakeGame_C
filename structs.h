#ifndef STRUCTS
#define STRUCTS

typedef struct {

    int current_position[2];
    int next_position[2];
    int direction;
    int length;
    int value;

} Snake;

Snake construct_snake()
{
    Snake new_snake;
    new_snake.current_position[0] = 20;
    new_snake.current_position[1] = 20;
    new_snake.direction = 3;
    new_snake.length = 1;
    new_snake.value = 1;

    return new_snake;

}

typedef struct {
    
    int current_position[2];
    int value;

} Apple;

Apple construct_apple()
{
    Apple new_apple;
    new_apple.value = 9;

    return new_apple;
}

#endif // !STRUCTS