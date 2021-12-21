#pragma once
#include "Mover.h"
#include "Confetti.h"
#include "ofMain.h"

class ParticleSystem
{
public:
	ParticleSystem( ofVec2f o);
	~ParticleSystem();

	void update();
	void draw();
	void addParticle();

private:
	ofVec2f origin;
	vector<Mover*> particles;
};

