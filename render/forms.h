#include"raylib.h"

void cilindro(int tam, int cuts, float radiousBottom, float radiousUp, Color color){
    DrawCylinder((Vector3) {3.0f,0.0f,9.0f},radiousUp,radiousBottom,tam,cuts, color);
}
