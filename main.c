#include<raylib.h>

#include"src/window/window_init.h"
#include"render/camera_properties.h"
#include"render/render.h"
#include"src/window/window.c"
#include"render/camera_properties.c"
#include"render/render.c"

window_comp win;

camera_properties cam;

int main(){

    SetWindowVariables();

    SetupWindow();

    render_init();

    setCamera();
    SetCameraMode(cp.camera, CAMERA_FIRST_PERSON);

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
