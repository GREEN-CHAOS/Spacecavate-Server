#include "SatAtt.h"



   SatAtt::SatAtt(Vector3 posInit , Vector3 vInit, int mInit, Vector3 collisionAreaInit[2],bool nogravityeffectInit , Vector3 aInit){
        this -> pos = posInit;
        this -> posn = posInit;
        this -> v = vInit;
        this -> a = aInit;
        this -> m = mInit;
        this -> collisionArea[0] = collisionAreaInit[0];
        this -> collisionArea[1] = collisionAreaInit[1];
        this -> nogravityeffect = nogravityeffectInit;
    }

   SatAtt::SatAtt(Vector3 posInit, Vector3 vInit, int mInit ,bool nogravityeffectInit , Vector3 aInit ){
        pos = posInit;
        posn = posInit;
        v = vInit;
        a = aInit;
        m = mInit;
        nogravityeffect = nogravityeffectInit;
    }

   