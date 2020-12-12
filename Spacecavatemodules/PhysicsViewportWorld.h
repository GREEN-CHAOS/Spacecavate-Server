#pragma message ( "PhysicsViewportWorld.h start" )
#ifndef PHYSICSVIEWPORTWORLD
#define PHYSICSVIEWPORTWORLD

#include "scene/main/viewport.h"

class PhysicsViewportWorld : public Viewport {
	GDCLASS(PhysicsViewportWorld, Viewport);

private:
	Vector3 nullposcoordinates;

protected:
	static void _bind_methods();

public:
	void set_originshift(Vector3 nullposcoordinates);
	PhysicsViewportWorld();
	PhysicsViewportWorld(Vector3 nullposcoordinates);
	DisplayServer::WindowID get_window_id() const;
	String get_configuration_warning() const;
	void _validate_property(PropertyInfo &property) const;
	bool _can_consume_input_events() const;
};
#endif
#pragma message ( "PhysicsViewportWorld.h done" )