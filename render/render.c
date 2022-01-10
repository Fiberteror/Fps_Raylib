#include"render.h"
#include"raylib.h"
#include"forms.h"

renderer_comp renderer;

void render_init(void){

    for (int i = 0; i < MAX_COLUMNS; i++){
        renderer.heights[i] = (float)GetRandomValue(1, HEIGHT);
        renderer.positions[i] = (Vector3){ (float)GetRandomValue(-150, 150),renderer.heights[i]/2.0f, (float)GetRandomValue(-15, 15) };
        renderer.colors[i] = (Color){ GetRandomValue(20, 255), GetRandomValue(10, 55), 30, 255 };
    }
}

void render_campo(void){
    DrawCube((Vector3){ 165.0f/2, 0.0f, -100.0f }, 165.0f, 10.0f, 1.0f, GRAY);
    DrawCube((Vector3){ 0.0f, 0.0f, -15.0f }, 1.0f, 10.0f, 200.0f, GRAY);
    DrawCube((Vector3){ 145.0f, 0.0f, -5.0f }, 1.0f, 10.0f, 165.0f, GRAY);
    DrawCube((Vector3){ 145.0f, 0.0f, -5.0f }, 1.0f, 10.0f, 200.0f, GRAY);
    DrawCube((Vector3){ 165.0f/2-15, 0.0f, 165.0f/2 }, 160.0f, 10.0f, 0.0f, GRAY);
}

void render(void){
    DrawPlane((Vector3){ 0.0f, 0.0f, 0.0f }, (Vector2){ 1032.0f, 1032.0f }, GREEN); // Draw ground

                
    for (int i = 0; i < 30; i++)
    {
        DrawCylinder((Vector3) {1.0f,-4.0f,-82.5f/4+15},0.2f,0.3f,12.0f,15, BLACK);
        DrawCylinder((Vector3) {130.0f,0.0f,-82.5f/4+15},0.2f,0.3f,12.0f,15, BLACK);
        render_campo();
    }
}
