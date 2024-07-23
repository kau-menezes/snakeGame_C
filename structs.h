#ifndef STRUCTS
#define STRUCTS

typedef struct {

    int current_position[2] = {20, 20};
    int next_position[2];
    int direction = 0;
    int length = 1;

} Snake;
#endif // !STRUCTS