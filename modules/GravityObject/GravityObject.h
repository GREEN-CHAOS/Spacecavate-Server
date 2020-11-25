
#ifndef GRAVITYOBJECT
#define GRAVITYOBJECT

#include "scene/3d/physics_body_3d.h"
#include "scene/3d/collision_shape_3d.h"
#include "scene/3d/mesh_instance_3d.h"

class GravityObject : public KinematicBody3D , public CollisionShape3d, public MeshInstance3D  {

    GDCLASS(GravityObject,KinematicBody3d)

    protected:
    static void _bind_methods();
}