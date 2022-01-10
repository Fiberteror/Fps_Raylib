#define CUBES 15
#define MAX_COLUMNS 20
#include "raylib.h"

typedef struct{
    float heights[MAX_COLUMNS] = { 0 };
    Vector3 positions[MAX_COLUMNS] = { 0 };
    Color colors[MAX_COLUMNS] = { 0 };
}render_init;

void render(void);
