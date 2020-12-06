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
    Vector3 collisionArea[2];
    bool nogravityeffect = false;
    int m = 0;

    SatAtt(Vector3 pos1 , Vector3 v1, int m1, Vector3 collisionArea1[2],bool nogravityeffect1 = false, Vector3 a1= Vector3());
    SatAtt(Vector3 pos1, Vector3 v1, int m1 ,bool nogravityeffect1 = false, Vector3 a1 = Vector3());



};
#endif