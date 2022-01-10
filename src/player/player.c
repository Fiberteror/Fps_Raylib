#include<raylib.h>

#include"player_script.h"

player_script play;

bool collision(Rectangle player,Rectangle object){

    bool collision;

    collision=CheckCollisionRecs(player,object);

    return collision;

}

void playercoliision(void){
    play.playerpos=(Vector3){play.camera.position.x,play.camera.position.z,play.camera.position.y};
}