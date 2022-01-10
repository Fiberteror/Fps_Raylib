#include"render.h"
#include "raylib.h"

render_init render;

void render(void){
    for (int i = 0; i < MAX_COLUMNS; i++){
        render.heights[i] = (float)GetRandomValue(1, 12);
        render.positions[i] = (Vector3){ (float)GetRandomValue(-150, 150), heights[i]/2.0f, (float)GetRandomValue(-15, 15) };
        render.colors[i] = (Color){ GetRandomValue(20, 255), GetRandomValue(10, 55), 30, 255 };
    }
    DrawPlane((Vector3){ 0.0f, 0.0f, 0.0f }, (Vector2){ 1032.0f, 1032.0f }, BLACK); // Draw ground    // Draw a yellow wall

                
    for (int i = 0; i < CUBES; i++)
    {
        DrawCube(positions[i], 2.0f, heights[i], 2.0f, colors[i]);
        DrawCubeWires(positions[i], 2.0f, heights[i], 2.0f, MAROON);
    }
    DrawFPS(10,10);
}
