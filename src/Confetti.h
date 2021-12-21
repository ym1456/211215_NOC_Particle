#pragma once
#include "Mover.h"
class Confetti : public Mover
{	
public:
	Confetti();
	Confetti(ofVec2f l, ofVec2f v, ofVec2f a, int r, float lf);
	void display();
};

