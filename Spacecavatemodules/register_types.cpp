#pragma message ( "registertypes start" )

#include "register_types.h"
#include "core/object/class_db.h"
#include "OrbitCalculator.h"
<<<<<<< Updated upstream
#include "GravityObject.h"
=======
//#include "GravityObject.h"
>>>>>>> Stashed changes
//#include "PhysicsViewportWorld.h"

void register_Spacecavatemodules_types(){
    ClassDB::register_class<OrbitCalculator>();
<<<<<<< Updated upstream
    ClassDB::register_class<GravityObject>();
=======
    //ClassDB::register_class<GravityObject>();
>>>>>>> Stashed changes
    //ClassDB::register_class<PhysicsViewportWorld>();
    }
void unregister_Spacecavatemodules_types(){


}
    #pragma message ( "register_types done" )