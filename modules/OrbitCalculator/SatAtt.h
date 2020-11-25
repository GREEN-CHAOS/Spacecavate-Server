#ifndef SATTATT_H
#define SATTATT_H
#include "IntVector3d.h"
#include "core/io/resource.h"
class SatAtt : public Resource
{
    GDCLASS(SatAtt,Resource)

    protected:
    static void _bind_methods();

    public:
    IntVector3d pos ;
    IntVector3d posn ;
    IntVector3d v ;
    IntVector3d a ;
    IntVector3d collisionArea[2];
    bool nogravityeffect = false;
    int m = 0;

    SatAtt(IntVector3d pos1 , IntVector3d v1, int m1, IntVector3d posn1, IntVector3d collisionArea1[2],bool nogravityeffect1 = false, IntVector3d a1= IntVector3d());
    SatAtt(IntVector3d pos1, IntVector3d v1, int m1 , IntVector3d posn1,bool nogravityeffect1 = false, IntVector3d a1 = IntVector3d());

    friend std::ostream& operator<<(std::ostream& os,SatAtt sat){
        return os << " pos :" << sat.pos << " posn :" << sat.posn << " v : "<< sat.v << " a : " << sat.a << " nogravityeffect : "<< sat.nogravityeffect << "collisonArea : "<< sat.collisionArea;
    }

};
#endif