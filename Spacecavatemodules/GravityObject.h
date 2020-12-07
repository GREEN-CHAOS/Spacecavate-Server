
#ifndef GRAVITYOBJECT
#define GRAVITYOBJECT

#include "scene/3d/physics_body_3d.h"
#include "scene/3d/collision_shape_3d.h"
#include "scene/3d/mesh_instance_3d.h"
#include "OrbitCalculator.h"

class GravityObject : public RigidBody3D {

    GDCLASS(GravityObject,RigidBody3D);

    private:
    int satindex;
    NodePath calcpath;
    Vector3 nullposcoordinates;


    void physics_process(real_t delta);


    void _process(real_t delta);

    protected:
    static void _bind_methods();
    void _notification(int p_what);
    
    public:
    void set_originshift(Vector3 nullposcoordiantes);
    GravityObject();
    GravityObject(int satindex , NodePath calcpath);
    void init(int satindex , NodePath calcpath);
};
#endif