#include "ParticleSystem.h"
ParticleSystem::ParticleSystem(ofVec2f o) {
	origin = o;
}

ParticleSystem::~ParticleSystem() {

}

void ParticleSystem::update() {
	addParticle();

	for (auto d : particles) {
		d->update();
	}

	for (auto it = particles.begin(); it != particles.end(); ++it) {
		if ((*it)->isDead() == true) {
			it = particles.erase(it);
		}
	}
}

void ParticleSystem::draw() {
	for (auto d : particles) {
		d->display();

	}
	
}

void ParticleSystem::addParticle() {
	float r = ofRandom(0,1);
	if (r < 0.5) {
		particles.push_back(new Mover(origin, ofVec2f(ofRandom(-5.0f, 5.0f), ofRandom(-5.0f, 5.0f)),
			ofVec2f(0.0, 0.1), ofRandom(3, 5), 200));
	}
	else {
		particles.push_back(new Confetti(origin, ofVec2f(ofRandom(-5.0f, 5.0f), ofRandom(-5.0f, 5.0f)),
			ofVec2f(0.0, 0.1), ofRandom(3, 5), 200));
	}

}
