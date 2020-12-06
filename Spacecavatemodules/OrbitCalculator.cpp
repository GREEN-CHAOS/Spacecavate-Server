#include "OrbitCalculator.h"

void OrbitCalculator::_bind_methods(){
    ClassDB::bind_method(D_METHOD("process","delta"),&OrbitCalculator::process);
    ClassDB::bind_method(D_METHOD("addSattelite","posInit", "vInit", "mInit" , "nogravityeffectInit" , "aInit"),&OrbitCalculator::newSattelite);
    ClassDB::bind_method(D_METHOD("removeSattelite","sat"),&OrbitCalculator::removeSattelite);
    ClassDB::bind_method(D_METHOD("set_rootnode","rootnodepath"),&OrbitCalculator::set_rootnode);
    ClassDB::bind_method(D_METHOD("get_rootnode",nullptr),&OrbitCalculator::get_rootnode);

    //register_property<OrbitCalculator,NodePath>("physics_rootnode",&OrbitCalculator::rootnode,"");
    ADD_PROPERTY(PropertyInfo(Variant::Type::NODE_PATH,"physics_rootnode"),"set_rootnode","get_rootnode");
}

void OrbitCalculator::newSattelite(Vector3 posInit,Vector3 vInit, real_t mInit , bool nogravityeffectInit , Vector3 aInit){
    SatAtt sat(posInit, vInit, mInit , nogravityeffectInit , aInit );
     sattelites.push_back(sat);
    print_line("newsatadded");
}

void OrbitCalculator::removeSattelite(int index){
    sattelites.erase(sattelites.begin() + index);
    print_line("satremoved");
}
OrbitCalculator::OrbitCalculator(/* args */)
{
    print_line("test");
}

OrbitCalculator::~OrbitCalculator()
{
}

void OrbitCalculator::_notification(int p_what){

    switch (p_what)
    {
    case NOTIFICATION_PROCESS:
        print_line("notfification");
        OrbitCalculator::process(get_process_delta_time());
        break;
    
    case NOTIFICATION_READY:
        print_line("ready");
        ready();
        break;
    default:
        break;
    }

}

void OrbitCalculator::process(real_t delta){
    print_line("looprunning" );
    for (int i = 0; i<sattelites.size();i++){
        if (sattelites[i].nogravityeffect) {
            sattelites[i].a = Vector3(0,0,0);
            continue;
        }
        for (int b = 0; b<sattelites.size();b++){
            if (i==b || sattelites[b].pos.distance_squared_to(sattelites[i].pos) < 2 ) {
                continue;
                }
                real_t pull = G * sattelites[b].m / sattelites[b].pos.distance_squared_to(sattelites[i].pos);
                Vector3 dir = sattelites[i].pos.direction_to(sattelites[b].pos).normalized();
                sattelites[i].a = dir*pull;
                //print_line("dir   " + String(dir)+ "bpos    " + String(sattelites[b].pos)+"ipos    "+String(sattelites[i].pos)+ "ia    " + String(sattelites[i].a) + "iv   " + String(sattelites[i].v));
               

            }
        sattelites[i].v = sattelites[i].a * delta + sattelites[i].v;
        sattelites[i].posn = /* sattelites[i].a *  delta * delta /2  + */  sattelites[i].v * delta + sattelites[i].pos;
        //print_line(sattelites[i].posn);
    }
    for (int i = 0; i < sattelites.size();i++) {

        sattelites[i].pos = sattelites[i].posn; 
        Node3D * child = (Node3D *) get_child(i);
        child ->set_translation(sattelites[i].pos);
        //print_line(String(childtrans));
        
    }
}

void OrbitCalculator::newcollision(int worldindex, int satindex){

    if(!rootnode -> has_node("world"+String::num_int64(worldindex))){
        //Ref<Node> test = Ref<Node>(Node::_new());

            //    rootnode -> add_child(,true);
            print_line("hasnode");
            
    }

      GravityObject* child = GravityObject::_new(satindex,this ->get_path());
    (rootnode -> get_node("world"+String::num_int64(worldindex))) -> add_child(child,true);
    
}

NodePath OrbitCalculator::get_rootnode(){

    return rootnode ->get_path();
}

void OrbitCalculator::set_rootnode(NodePath rootnodepath){
    rootnode = get_node(rootnodepath);

}


void OrbitCalculator::ready(){
    Collsionbody = ResourceLoader::load("res://Navball.tscn","res://Navball.tscn");
}

Vector3 OrbitCalculator::get_sattelite_pos(int satindex){

    return sattelites[satindex].pos;
}


Vector3 OrbitCalculator::get_sattelite_velocity(int satindex){

    return sattelites[satindex].v;
}