#include<raylib.h>

typedef struct 
{
    
    Camera camera;
    int health;
    Vector3 playerpos;
    

}player_script;



bool collision(Rectangle player,Rectangle object);

void playercoliision(void);
