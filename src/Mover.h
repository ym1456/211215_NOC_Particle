#pragma once
#include "ofMain.h"

class Mover {
public:
	ofVec2f location;
	ofVec2f velocity;
	ofVec2f acceleration;
	ofVec2f mouse;
	
	float mass;
	float speedLimit;
	int radius;
	float lifespan;

	Mover();
	Mover(ofVec2f l, ofVec2f v, ofVec2f a, int r, float lf);
	void setup(ofVec2f l, ofVec2f v, ofVec2f a, int r, float lf);
	void update();
	virtual void display();
	void applyForce(ofVec2f force);
	bool isDead();
};