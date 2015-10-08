#include "Ball.h"
#include "ofApp.h"
Ball::Ball(){
}

void Ball::setup(){
	
	x = ofRandom(0, ofGetWidth()-100);      // give some random positioning
    y = ofRandom(0, ofGetHeight()-100);
    
	x_afstand = ofRandom(40,100);
	y_afstand = ofRandom(40,100);

	//Raakrand_x = x + x_afstand;
	Raakrand_y = y + y_afstand;

    speedX = ofRandom(-10, 10);           // and random speed and direction
    speedY = ofRandom(-10, 10);

	radius = ofRandom(10,30);

    color_Random.set(ofRandom(255),ofRandom(255),ofRandom(255)); // one way of defining digital color is by adddressing its 3 components individually (Red, Green, Blue) in a value from 0-255, in this example we're setting each to a random value
    color_Red.set(255,0,0); //R,G,B
	color_Blue.set(0,0,255);
	color_Green.set(0,255,0);
}


void Ball::update(){
	if(x +x_afstand < 0 ){
         Raakrand_x = 0;
        speedX *= -1;
	} else if(x +x_afstand > ofGetWidth()){
		Raakrand_x = ofGetWidth();
        speedX *= -1;
    }

	if(y + y_afstand < 0 ){
		Raakrand_y = 0;
        speedY *= -1;
	} else if(y + y_afstand > ofGetHeight()){
		Raakrand_y = ofGetHeight();
        speedY *= -1;
    }

    x+=speedX;
    y+=speedY;
}

void Ball::draw(){
	ofSetCircleResolution(60);
    ofSetColor(color_Random);
    ofCircle(x, y, radius);

	ofSetColor(color_Red);
	ofRect(x + x_afstand, y + y_afstand, radius *0.5 , radius *0.5);
	//ofSetColor(color_Blue + color_Red);
	//ofRect(x - x_afstand, y - y_afstand, radius *0.5 , radius *0.5);

	//ofRect(x - x_afstand, y + y_afstand, radius *0.5 , radius *0.5);
	//ofRect(x + x_afstand, y - y_afstand, radius *0.5 , radius *0.5);
	
}
