#include<raylib.h>

#include"src/window/window_init.h"
#include"render/render.h"
#include"src/player/player_script.h"

window_comp win;

player_script player;

int main(){

    SetWindowVariables();
    SetupWindow();
    render_init();


    player.camera.position = (Vector3){ 4.0f, 2.0f, 4.0f };
    player.camera.target = (Vector3){ 0.0f, 1.8f, 0.0f };
    player.camera.up = (Vector3){ 0.0f, 1.0f, 0.0f };
    player.camera.fovy = 60.0f;
    player.camera.projection = CAMERA_PERSPECTIVE;
    SetCameraMode(player.camera, CAMERA_FIRST_PERSON);


    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        
    UpdateCamera(&player.camera);



    BeginDrawing();
        


        ClearBackground(BLUE);

        BeginMode3D(player.camera);
            render();


        EndMode3D();


    EndDrawing();

    }
    CloseWindow();

    return 1;
}
