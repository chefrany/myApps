#pragma once
#include "ofMain.h"
#include "ofxGui.h"

#include "ofMain.h"

#include "Ball.h"

#define MAXBALLS 2000

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void addBallen();
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
		void exit();

		int hoeveelHeid;

    ofxPanel gui;
    ofxIntSlider count;
    ofxFloatSlider speedX;
    ofxFloatSlider speedY;

		
		ofColor color_Random;
		ofColor color_Grey;
		Ball ball[MAXBALLS];
		//Trian trian[MAXBALLS];
};
