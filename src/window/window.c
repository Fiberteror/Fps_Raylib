#include<raylib.h>

#include"window_init.h"

//window_comp win;
window_comp window;

void SetWindowVariables(void){
window.FPS=60;
}

void SetupWindow(void){

InitWindow(SCREENWIDTH,SCREENHEIGHT,"develop");

}
