#ifndef STRUCTS
#define STRUCTS

typedef struct {

    int current_position[2] = {20, 20};
    int next_position[2];
    int direction = 0;
    int length = 1;
    int value = 1;

} Snake;

typedef struct {
    
    int current_position[2];
    int value = 9;

} Apple;
#endif // !STRUCTS