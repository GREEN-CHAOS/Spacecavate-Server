
#ifndef GRAVITYOBJECT2
#define GRAVITYOBJECT2

#include "scene/3d/physics_body_3d.h"
#include "scene/3d/collision_shape_3d.h"
#include "scene/3d/mesh_instance_3d.h"
#include "OrbitCalculator.h"

class GravityObject : public KinematicBody3D {

    GDCLASS(GravityObject,KinematicBody3D);

    private:

    const int satindex;
    const OrbitCalculator* calc; 


    void _process(real_t delta);

    protected:
    static void _bind_methods();
    
    
    public:
    void testmethod();
};
#endif