#pragma message ( "SatAtt start" )
#include "SatAtt.h"

SatAtt::SatAtt(Vector3 pos, Vector3 v, int m, int collisionradius, bool nogravityeffect, Vector3 a) {
	this->pos = pos;
	this->posn = pos;
	this->v = v;
	this->a = a;
	this->m = m;
	this->collisionradius = collisionradius;
	this->nogravityeffect = nogravityeffect;
}

#pragma message ( "SatAtt done" )
