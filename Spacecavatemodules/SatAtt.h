#ifndef SATTATT_H
#define SATTATT_H
#include "core/math/vector3.h"

class SatAtt
{


    public:
    Vector3 pos ;
    Vector3 posn ;
    Vector3 v ;
    Vector3 a ;
    int collisionradius;
    bool nogravityeffect = false;
    int m ;
    int worldid;

    SatAtt(Vector3 pos , Vector3 v, int m, int collisionradius ,bool nogravityeffect = false, Vector3 a= Vector3(0,0,0));



};
#endif