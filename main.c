#include<raylib.h>

#include"src/window/window_init.h"
#include"render/camera_properties.h"
#include"render/render.h"

window_comp win;

camera_properties cam;

int main(){

    SetVariables();

    SetupWindow();

    render_init();

    setCamera();

    SetTargetFPS(win.FPS);
    while (!WindowShouldClose())
    {
        
    UpdateCamera(&cam.camera);

    DrawText(TextFormat("X:%d",cam.camera.position.x),20,10,20,WHITE);

    BeginDrawing();
        
        ClearBackground(BLUE);
        
        BeginMode3D(cam.camera);
        
            render();
        EndMode3D();

    DrawGrid(30,1);
    EndDrawing();

    }
    CloseWindow();

    return 1;
}
