#ifndef _BALL
#define _BALL

#include "ofMain.h"

class Ball {

    public:

    Ball();

    void setup();
    void update();
    void draw();
	void teken();
    // variables
    float x;
    float y;
    float speedY;
    float speedX;
	float x_afstand;
	float y_afstand;
	float Raakrand_x;
	float Raakrand_y;
    
    ofColor color_Random;
	ofColor color_Red;
	ofColor color_Green;
	ofColor color_Blue;
	int hoeveelheid;
	int radius;

    private:

};
#endif
