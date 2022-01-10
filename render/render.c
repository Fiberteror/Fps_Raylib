#include"render.h"
#include "raylib.h"

renderer_comp renderer;

void render_init(void){

    for (int i = 0; i < MAX_COLUMNS; i++){
        renderer.heights[i] = (float)GetRandomValue(1, 12);
        renderer.positions[i] = (Vector3){ (float)GetRandomValue(-150, 150),renderer.heights[i]/2.0f, (float)GetRandomValue(-15, 15) };
        renderer.colors[i] = (Color){ GetRandomValue(20, 255), GetRandomValue(10, 55), 30, 255 };
    }
}

void render(void){
    DrawPlane((Vector3){ 0.0f, 0.0f, 0.0f }, (Vector2){ 1032.0f, 1032.0f }, BLACK); // Draw ground    // Draw a yellow wall

                
    for (int i = 0; i < CUBES; i++)
    {
        DrawCube(renderer.positions[i], 2.0f,renderer.heights[i], 2.0f,renderer.colors[i]);
        DrawCubeWires(renderer.positions[i], 2.0f,renderer.heights[i], 2.0f, MAROON);
    }
    DrawFPS(10,10);
}
