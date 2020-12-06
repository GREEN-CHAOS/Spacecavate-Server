#include "GravityObject.h"

void GravityObject::testmethod(){

     print_line("soos");

}

void GravityObject::_process(real_t delta){
    KinematicBody3D::move_and_slide(calc->get_sattelite_pos(satindex));
}
