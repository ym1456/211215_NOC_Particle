#include "Mover.h"

Mover::Mover() {

}

Mover::Mover(ofVec2f l, ofVec2f v, ofVec2f a, int r, float lf) {
	radius = r;
	location = l;
	velocity = v;
	speedLimit = 10;
	acceleration = a;
	mass = radius;
	lifespan = lf;
}

void Mover::update() {
	velocity += acceleration;
	location += velocity;
	lifespan -= 2.0;
}

void Mover::display() {
	ofSetCircleResolution(120);
	ofSetColor(0,lifespan);
	ofFill();
	ofDrawCircle(location, radius);
}

void Mover::applyForce(ofVec2f force) {
	ofVec2f f = force;
	f /= mass;
	acceleration += f;
}

bool Mover::isDead() {
	if (lifespan < 0.0) 
	{
		return true;
	}
	else {
		return false;
	}
}