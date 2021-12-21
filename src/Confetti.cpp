#include "Confetti.h"
Confetti::Confetti() {
}

Confetti::Confetti(ofVec2f l, ofVec2f v, ofVec2f a, int r, float lf) : Mover(l, v, a, r, lf) {}

void Confetti::display() {
	float theta = ofMap(location.x, 0, ofGetWidth(), 0, TWO_PI * 2);
	ofSetRectMode(OF_RECTMODE_CENTER);
	ofPushMatrix();
	ofTranslate(location.x, location.y);
	ofRotateRad(theta);
	ofSetColor(0, lifespan);
	ofDrawRectangle(0, 0, 8, 8);
	ofPopMatrix();
}