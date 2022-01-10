#include<raylib.h>

#include"src/window/window_init.h"
//#include"render/camera_properties.h"
#include"render/render.h"

window_comp win;

//camera_properties cam;

int main(){

    SetWindowVariables();

    SetupWindow();

    render_init();

    //setCamera();

    Camera camera={0};
    camera.position = (Vector3){ 4.0f, 2.0f, 4.0f };
    camera.target = (Vector3){ 0.0f, 1.8f, 0.0f };
    camera.up = (Vector3){ 0.0f, 1.0f, 0.0f };
    camera.fovy = 60.0f;
    camera.projection = CAMERA_PERSPECTIVE;
    SetCameraMode(camera, CAMERA_FIRST_PERSON);


    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        
    UpdateCamera(&camera);

    BeginDrawing();
        
        ClearBackground(BLUE);
        
        BeginMode3D(camera);
        
            render();
            DrawGrid(10, 1.0f);
        EndMode3D();

        DrawFPS(10,10);
    EndDrawing();

    }
    CloseWindow();

    return 1;
}
