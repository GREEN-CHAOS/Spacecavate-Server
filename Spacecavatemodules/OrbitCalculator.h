#pragma message ( "OrbitCalcualtor.h start" )

#ifndef ORBITCALCULATOR_H
#define ORBITCALCULATOR_H
#define REAL_T_IS_DOUBLE

#include "GravityObject.h"
#include "SatAtt.h"
#include "vector"
#include "scene/main/node.h"
#include "core/math/vector3.h"
#include "scene/3d/physics_body_3d.h"
#include "scene/3d/node_3d.h"


class OrbitCalculator : public Node
{
    GDCLASS(OrbitCalculator, Node);
    //1 = 1mm int satatt => 1000 = 1m

protected:
    static void _bind_methods();
    void _notification(int p_what);

private:
    std::vector<SatAtt> sattelites ;
    std::vector<GravityObject> GravityObjects ;
    void ready();
    
public:
    const float G = 0.067430;
    RES Collisionbody;
    Node* rootnode;
    OrbitCalculator();
    ~OrbitCalculator();
    int addSattelite();
    void process(real_t delta);
    void newSattelite(Vector3 posInit,Vector3 vInit, real_t mInit , bool nogravityeffectInit ,int collisionradiusInit , Vector3 aInit);
    void removeSattelite(int index);
    void newcollision(int worldindex, int satindex);

    NodePath get_rootnode();
    void set_rootnode(NodePath rootnodepath);

    Vector3 get_sattelite_pos(int satindex);
    Vector3 get_sattelite_velocity(int satindex);

};

#endif

#pragma message ( "OrbitCalculator.h done" )
