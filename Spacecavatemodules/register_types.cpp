#pragma message ( "registertypes start" )

#include "register_types.h"
#include "core/object/class_db.h"
#include "OrbitCalculator.h"
#include "GravityObject.h"
//#include "PhysicsViewportWorld.h"

void register_Spacecavatemodules_types(){
    ClassDB::register_class<OrbitCalculator>();
    ClassDB::register_class<GravityObject>();
    //ClassDB::register_class<PhysicsViewportWorld>();
    }
void unregister_Spacecavatemodules_types(){


}
    #pragma message ( "register_types done" )