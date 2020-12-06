#include "GravityObject.h"



void GravityObject::_bind_methods(){


}

void GravityObject::_process(real_t delta){
    //KinematicBody3D::move_and_slide(calc->get_sattelite_velocity(satindex));
}

void GravityObject::_notification(int p_what){

    switch (p_what)
    {
    case NOTIFICATION_INTERNAL_PHYSICS_PROCESS:
        //if (calc != nullptr){
        physics_process(get_physics_process_delta_time());
        
        //}
        break;
    
    default:
        break;
    }
}

void GravityObject::physics_process(real_t delta){
   // if (calc != nullptr){
    
    set_linear_velocity(((OrbitCalculator*)get_node(calcpath)) -> get_sattelite_velocity(satindex) + get_linear_velocity());
   // }
}

GravityObject * GravityObject::_new(int satindex , NodePath calcpath){

    GravityObject body = GravityObject(satindex,calcpath);
    return &body;
}


GravityObject::GravityObject(){

    this -> calcpath = NodePath("");
    this -> satindex = NULL;
}



GravityObject::GravityObject(int satindex, NodePath calcpath){

    this -> calcpath = NodePath("");
    this -> satindex = NULL;
}
