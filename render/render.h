#define CUBES 15
#define MAX_COLUMNS 20
#include "raylib.h"

typedef struct{
    float heights[MAX_COLUMNS];
    Vector3 positions[MAX_COLUMNS];
    Color colors[MAX_COLUMNS];
}render_init;

void render(void);
