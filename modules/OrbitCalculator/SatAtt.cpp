#include "SatAtt.h"

    void SatAtt::_bind_methods(){
        ClassDB::bind_method(D_METHOD("SatAtt","posInit","vInit","mInit","posnInit","nogravityeffectInit","aInit"),&SatAtt::SatAtt);

    }

   SatAtt::SatAtt(IntVector3d posInit , IntVector3d vInit, int mInit, IntVector3d posnInit, IntVector3d collisionAreaInit[2],bool nogravityeffectInit , IntVector3d aInit){
        std::cout << "sattatt" << posInit <<posnInit << vInit << aInit << mInit << collisionArea << nogravityeffect << std::endl;
        this -> pos = posInit;
        this -> posn = posnInit;
        this -> v = vInit;
        this -> a = aInit;
        this -> m = mInit;
        this -> collisionArea[0] = collisionAreaInit[0];
        this -> collisionArea[1] = collisionAreaInit[1];
        this -> nogravityeffect = nogravityeffectInit;
    }

   SatAtt::SatAtt(IntVector3d posInit, IntVector3d vInit, int mInit , IntVector3d posnInit,bool nogravityeffectInit , IntVector3d aInit ){
        pos = posInit;
        posn = posnInit;
        v = vInit;
        a = aInit;
        m = mInit;
        nogravityeffect = nogravityeffectInit;        
        std::cout << "satatt2"<< pos <<posn << v << a << m  << nogravityeffect << std::endl;
    }

   