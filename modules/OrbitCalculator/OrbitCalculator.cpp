#include "OrbitCalculator.h"

void OrbitCalculator::_bind_methods(){
    ClassDB::bind_method(D_METHOD("process","delta"),&OrbitCalculator::process);
    ClassDB::bind_method(D_METHOD("addSattelite","sat"),&OrbitCalculator::newSattelite);
    ClassDB::bind_method(D_METHOD("removeSattelite","sat"),&OrbitCalculator::removeSattelite);

}

void OrbitCalculator::newSattelite(SatAtt sat){
     sattelites.push_back(sat);
     std::cout << "added sattelite" << sat << std::endl;
}

void OrbitCalculator::removeSattelite(int index){
    sattelites.erase(sattelites.begin() + index);
}
OrbitCalculator::OrbitCalculator(/* args */)
{
}

OrbitCalculator::~OrbitCalculator()
{
}

void OrbitCalculator::process(int delta){
    for (int i = 0; i<sattelites.size();i++){
        if (sattelites[i].nogravityeffect) {
            //std::cout << "skipped nogravityeffect" << std::endl;
            continue;
        }
        for (int b = 0; b<sattelites.size();b++){
            if (i==b) {
                continue;
                }
                sattelites[i].a = IntVector3d(G * sattelites[b].m) /(sattelites[b].pos - sattelites[i].pos) + sattelites[i].a;
               // std::cout << "a" << sattelites[i].a ;
               // std::cout << "   dividend" << IntVector3d(G * sattelites[b].m) << "   divisor" << (sattelites[b].pos - sattelites[i].pos) <<"output" << IntVector3d(G * sattelites[b].m) / (sattelites[b].pos - sattelites[i].pos) << std::endl;

            }
        //std::cout << i << sattelites[i] << std::endl;
        sattelites[i].posn = sattelites[i].a * delta * delta /2 + sattelites[i].v * delta + sattelites[i].pos;
        sattelites[i].v = sattelites[i].a * delta;
        sattelites[i].a = IntVector3d(0);
        std::cout << "sattelite" << i << "    " << sattelites[i] << std::endl;
    }
    for (int i = 0; i < sattelites.size();i++) {

        sattelites[i].pos = sattelites[i].posn;
    }
}
