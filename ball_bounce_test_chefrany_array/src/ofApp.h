#pragma once

#include "ofMain.h"

#define MAXBALLS 10 
// hier vertel je hoe groot de array is in dit geval *11*
// Je bepaald zelf de groote van de array

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

        float x[MAXBALLS];
		// voor elk getal in de array wordt dit aangemaakt --> 0,1,2,3,4,5,6,7,8,9,10 (11x)totaal
		// Waardoor we in de offApp dit kunnen gebruiken voor elk getal uit da array (MAXBALLS)

        float y[MAXBALLS];
		// voor elk getal in de array wordt dit aangemaakt --> 0,1,2,3,4,5,6,7,8,9,10 (11x)totaal
		// Waardoor we in de offApp dit kunnen gebruiken voor elk getal uit da array (MAXBALLS)

        float speedY[MAXBALLS];
		// voor elk getal in de array wordt dit aangemaakt --> 0,1,2,3,4,5,6,7,8,9,10 (11x)totaal
		// Waardoor we in de offApp dit kunnen gebruiken voor elk getal uit da array (MAXBALLS)

        float speedX[MAXBALLS];
		// voor elk getal in de array wordt dit aangemaakt --> 0,1,2,3,4,5,6,7,8,9,10 (11x)totaal
		// Waardoor we in de offApp dit kunnen gebruiken voor elk getal uit da array (MAXBALLS)

        int radius[MAXBALLS];
		// voor elk getal in de array wordt dit aangemaakt --> 0,1,2,3,4,5,6,7,8,9,10 (11x)totaal
		// Waardoor we in de offApp dit kunnen gebruiken voor elk getal uit da array (MAXBALLS)

        ofColor color[MAXBALLS];
		// voor elk getal in de array wordt dit aangemaakt --> 0,1,2,3,4,5,6,7,8,9,10 (11x)totaal
		// Waardoor we in de offApp dit kunnen gebruiken voor elk getal uit da array (MAXBALLS)
	
};
