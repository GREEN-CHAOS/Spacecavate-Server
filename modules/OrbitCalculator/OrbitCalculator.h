#ifndef ORBITCALCULATOR_H
#define ORBITCALCULATOR_H

#include "SatAtt.h"
#include "vector"
#include "scene/main/node.h"

class OrbitCalculator : public Node
{
    GDCLASS(OrbitCalculator, Node);
    //1 = 1mm int satatt => 1000 = 1m

protected:
    static void _bind_methods();

private:
    std::vector<SatAtt> sattelites ;
    /* data */
public:
    const float G = 0.067430;
    OrbitCalculator(/* args */);
    ~OrbitCalculator();
    int addSattelite();
    void process(int delta);
    void newSattelite(SatAtt sat);
    void removeSattelite(int index);


};

#endif


