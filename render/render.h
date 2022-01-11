#define CUBES 15
#define MAX_COLUMNS 20
#define HEIGHT 15
#define OBJECTS 50
#define LENGHT 15
#include "raylib.h"

typedef struct{
    float heights[MAX_COLUMNS];
    float widths[MAX_COLUMNS];
    Vector3 positions[MAX_COLUMNS];
    Color colors[MAX_COLUMNS];
}renderer_comp;

void render_init(void);
void render(void);
void renderzone(void);
