#include "camera_properties.h"

camera_properties cp;

void setCamera(void){
    cp.camera.position = (Vector3){ 4.0f, 2.0f, 4.0f };
    cp.camera.target = (Vector3){ 0.0f, 1.8f, 0.0f };
    cp.camera.up = (Vector3){ 0.0f, 1.0f, 0.0f };
    cp.camera.fovy = 60.0f;
    cp.camera.projection = CAMERA_PERSPECTIVE;
}
