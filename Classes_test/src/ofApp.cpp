#include "ofApp.h"
#include "Ball.h"


//--------------------------------------------------------------
void ofApp::setup() {
	gui.setup("Instellingen","settings.xml");

	gui.add(speedX.setup("speedX",20,0,200));
    gui.add(speedY.setup("speedY",20,0,200));


	color_Grey.set(170);
	hoeveelHeid =5;
	//Ball[] balls = new Ball[MAXBALLS];

    for (int i=0; i<hoeveelHeid; i++) {
        ball[i].setup();
    }

	
}

//--------------------------------------------------------------
void ofApp::update() {

	color_Random.set(ofRandom(255),ofRandom(255),ofRandom(255));

	for (int i=0; i<hoeveelHeid; i++) {
        ball[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw() {
	for (int i=0; i<hoeveelHeid; i++) {
        ball[i].draw();
    }
	gui.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
	if (key == 'a' || key == 'A')
	{
		ofBackground(color_Grey);
	}

	if (key == 's' || key == 'S')
	{
		addBallen();
	
    }

	//int dist = Distance(ball.x,ball.y,ball2.y,ball2.y);
	
	
}

//int ofApp::Distance(int x1,int y1,int x2, int y2){

	//return sqrt((x2-x1)^2 + (y1-y2)^2);
//}
//--------------------------------------------------------------
void ofApp::exit() {
    gui.saveToFile("settings.xml");
}

//--------------------------------------------------------------
void ofApp::addBallen(){
	
	hoeveelHeid += 5;
	//hoeveelHeid = hoeveelHeid + 5;
	for (int i=5; i<hoeveelHeid; i++) {
		ball[i].setup();
		
	}
	
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

	if (key == 'a' )
	{
		ofBackground(color_Random);
	}
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
