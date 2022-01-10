#include<raylib.h>

#include"src/window/window_init.h"
#include"render/camera_properties.c"
#include"render/render.c"

window_comp win;

int main(){

    SetVariables();

    SetupWindow();

    setCamera();

    SetTargetFPS(win.FPS);
    while (!WindowShouldClose())
    {
        
    BeginDrawing();
        
        ClearBackground(BLUE);
        
        BeginMode3D(camera);
        
            render();
        EndMode3D();

    EndDrawing();

    }
    CloseWindow();

    return 1;
}
