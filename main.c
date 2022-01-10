#include<raylib.h>

#include"src/window/window_init.h"


int main(){

    SetVariables();

    SetupWindow();

    while (!WindowShouldClose())
    {
        
    BeginDrawing();

    ClearBackground(BLUE);

    EndDrawing();

    }
    CloseWindow();

    return 1;
}