#include<raylib.h>

#include"window_comp.h"

window_comp win;

void SetVariables(void){
win.screenwidht=1200;
win.screenheight=720;
win.FPS=60;
}

void SetupWindow(void){

InitWindow(win.screenwidht,win.screenheight,"develop");

}