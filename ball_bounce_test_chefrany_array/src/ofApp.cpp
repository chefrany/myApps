#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	ofBackground(0);
    // *****kies random start coordinaten*****
	// Alles wat in de setup staat wordt aan het begin uitgevoerd (op het moment dat de app start)
	
	
    for (int i=0; i<MAXBALLS; i++) {  
		// variabel aangemaakt genoemd i 
		// i staat gelijk aan 0 
		// als i kleiner is dan de grote van de array (dit geval 10) tell dan 1 op bij i tot 10 bereikt is (11x)totaal
		
		x[i] = ofRandom(0, ofGetWidth());
		// de x waarde wordt random bepaald tussen de 0 en de max *breedte* van je app window
		// voor elk getal in de array wordt dit bepaald --> 0,1,2,3,4,5,6,7,8,9,10 (11x)totaal

        y[i] = ofRandom(0, ofGetHeight());
		// de y waarde wordt random bepaald tussen de 0 en de max *hoogte* van je app window
		// voor elk getal in de array wordt dit bepaald --> 0,1,2,3,4,5,6,7,8,9,10 (11x)totaal

        // random snelheid
        speedX[i] = ofRandom(-10, 10);
		// de x snelheid wordt random bepaald tussen -10 ( naar links) en 10 (naar rechts)
		// voor elk getal in de array wordt dit bepaald --> 0,1,2,3,4,5,6,7,8,9,10 (11x)totaal

        speedY[i] = ofRandom(-10, 10);
		// de y snelheid wordt random bepaald tussen -10 ( naar boven) en 10 (naar benden)
		// voor elk getal in de array wordt dit bepaald --> 0,1,2,3,4,5,6,7,8,9,10 (11x)totaal

        // grootte van cirkel
        radius[i] = ofRandom(40,80);
		//radius(x&y = gelijk) wordt random bepaald tussen de 40px groot en de 80px groot
		// voor elk getal in de array wordt dit bepaald --> 0,1,2,3,4,5,6,7,8,9,10 (11x)totaal

        color[i].set(ofRandom(255),ofRandom(255),ofRandom(255));

		// de waarde voor Rood,Groen,Blauw wordt random bepaald tussen de 0 en de 255)
		// voor elk getal in de array wordt dit bepaald --> 0,1,2,3,4,5,6,7,8,9,10 (11x)totaal
    }
	
}

//--------------------------------------------------------------
void ofApp::update() {

    for (int i=0; i<MAXBALLS; i++) { 
		// Deze forloop zorgt er voor dat elk getal in de array (MAXBALLS) een update krijgt
		// voor elk getal in de array wordt dit bepaald --> 0,1,2,3,4,5,6,7,8,9,10 (11x)totaal

		// *****links/ rechts tegen de rand aan? keer om!*****
        if(x[i] < 0 ) {  
            x[i] = 0;
		// als de x van getal uit de array kleiner dan 0 wordt --> dan wordt het naar 0 gezet

            speedX[i] = -speedX[i];
        // de richting van het object wordt omgedraaid  + --> - / - --> +

        } else if(x[i] > ofGetWidth()) {
            x[i]= ofGetWidth();
        // als de x van een getal uit de array groter wirdt dan de app window
        // dan wordt het naar de max breedte gezet van de app window 

            speedX[i] = -speedX[i];
		// de richting van het object wordt omgedraaid  + --> - / - --> +
        }

        // *****boven/onder tegen de rand aan? keer om!*****
		// hier gebeurt hetzelfde als bij de X_as maar dan voor de Y_as *look above*
        if(y[i] < 0 ) {
            y[i]= 0;
            speedY[i] = -speedY[i];
        } else if(y[i] > ofGetHeight()) {
            y[i] = ofGetHeight();
            speedY[i] = -speedY[i];
        }

        // *****bereken nieuwe coordinaten*****
        x[i]+=speedX[i];
		// elke frame --> X positie van dat moment + de in de setup bepaald *speedX*

        y[i]+=speedY[i];
		// elke frame --> Y positie van dat moment + de in de steup bepaalde *speedY*

    }
	ofBackground(ofRandom(mouseY *0.1 , mouseX *0.5),ofRandom(mouseX *0.1 , mouseY *0.5) , ofRandom(mouseX *0.1 , mouseX *0.5), ofRandom(mouseY *0.1 , mouseX *0.5));
	// achtergrondKleur R,G,B,Transparantie 
	// Waardes worden bepaald op basis van de X Positie *.... = uitkomst
	// Deze wordt elke keer geupdate zodra de waarde van mijn X veranderd



}

//--------------------------------------------------------------
void ofApp::draw() {

    for (int i=0; i<MAXBALLS; i++) {
	   ofFill();
      // Deze forloop zorgt er voor dat elk getal in de array (MAXBALLS) een *draw* krijgt
      // voor elk getal in de array wordt dit bepaald --> 0,1,2,3,4,5,6,7,8,9,10 (11x)totaal

       ofSetColor(color[i]);
	  // De in de steup bepaalde kleur voor elk object elke frame opnieuw wordt getekent
	  // voor elk getal in de array wordt dit bepaald --> 0,1,2,3,4,5,6,7,8,9,10 (11x)totaal

       ofCircle(x[i], y[i], radius[i]);
	  // De in de steup bepaalde groote voor elk object elke frame opnieuw wordt getekent
	  // voor elk getal in de array wordt dit bepaald --> 0,1,2,3,4,5,6,7,8,9,10 (11x)totaa	  
    }
	

ofSetColor(255,ofRandom(150,255));
//modus Grijswaarde - 255 = wit  / transparantie random tussen de 150 en de 255 

ofSetLineWidth(5);
// Lijn dikte wordt hier bepaald

ofNoFill();
// geen vulling voor de volgende objecten

ofBeginShape();
  ofVertex(ofRandom(0,ofGetWidth()),ofRandom(0,ofGetHeight()));
  ofVertex(ofRandom(0,ofGetWidth()),ofRandom(0,ofGetHeight()));
  ofVertex(ofRandom(0,ofGetWidth() *0.5),ofRandom(0,ofGetHeight()));
  ofVertex(ofRandom(0,ofGetWidth()),ofRandom(0,ofGetHeight()));
  ofVertex(ofRandom(0,ofGetWidth()),ofRandom(0,ofGetHeight() *0.5));
ofEndShape();

ofSetColor(255);
	ofFill();
	ofRect(0, 0, 250, 250);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}
