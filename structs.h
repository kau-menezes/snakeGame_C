#ifndef STRUCTS
#define STRUCTS

typedef struct SnakeNode {

    int current_position[2];
    // int next_position[2];
    struct SnakeNode *next;

} SnakeNode;

typedef struct {

    int direction;
    int length;
    int value;
    SnakeNode* head;

} Snake;

Snake construct_snake()
{
    Snake new_snake;
    
    new_snake.direction = 3;
    new_snake.length = 1;
    new_snake.value = 1;

    
    SnakeNode *new_node = malloc( sizeof(SnakeNode));
    new_snake.head = new_node;

    new_node->current_position[0] = 20;
    new_node->current_position[1] = 20;
    // new_node->next_position[0] = 20;
    // new_node->next_position[1] = 21;

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