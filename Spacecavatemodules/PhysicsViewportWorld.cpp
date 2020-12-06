#include "PhysicsViewportWorld.h"

void PhysicsViewportWorld::_bind_methods() {
}

void PhysicsViewportWorld::set_originshift(Vector3 nullposcoordinates) {
	this->nullposcoordinates = nullposcoordinates;
}

PhysicsViewportWorld *PhysicsViewportWorld::_new(Vector3 nullposcoordinates) {
	PhysicsViewportWorld port = PhysicsViewportWorld(nullposcoordinates);
	return &port;
}

PhysicsViewportWorld::PhysicsViewportWorld() {
	this->nullposcoordinates = Vector3(0, 0, 0);
}

PhysicsViewportWorld::PhysicsViewportWorld(Vector3 nullposcoordinates) {
	this->nullposcoordinates = nullposcoordinates;
}



//override the virtual methods
String PhysicsViewportWorld::get_configuration_warning() const {
	return "";
}

void PhysicsViewportWorld::_validate_property(PropertyInfo &property) const {
}

DisplayServer::WindowID PhysicsViewportWorld::get_window_id() const {
	return 0;
}

bool PhysicsViewportWorld::_can_consume_input_events() const {
	return false;
}