#include<raylib.h>

#include"src/window/window_init.h"

window_comp win;

int main(){

    SetVariables();

    SetupWindow();


    SetTargetFPS(win.FPS);
    while (!WindowShouldClose())
    {
        
    BeginDrawing();

    ClearBackground(BLUE);

    DrawFPS(10,10);

    EndDrawing();

    }
    CloseWindow();

    return 1;
}