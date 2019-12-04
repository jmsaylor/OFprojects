#include "ofApp.h"

int r,g,b;
bool upr, upg, upb;
string red; 
string green;
string blue;
int raverage, gaverage,baverage;
int rmap, gmap, bmap;


//--------------------------------------------------------------
void ofApp::setup(){

	ofSetFrameRate(5);

	ofBackground(0);

	r = 20;
	g = 120;
	b = 200;

	upr = true;
	upg = true;
	upb = true;

	red = ofToString(r);
	green = ofToString(g);
	blue = ofToString(b);
}

//--------------------------------------------------------------
void ofApp::update(){

        if (upr) {
	r = r + 2;} 
	else {
	r = r - 2;}

	if (r<0) {upr=true;} else if ( r > 255) {upr=false;}

        if (upg) {
	g = g + 5;} 
	else {
	g = g - 5;}

	if (g<0) {upg=true;} else if ( g > 255) {upg=false;}

        if (upb) {
	b = b + 1;} 
	else {
	b = b - 1;}

	if (b<0) {upb=true;} else if ( b > 255) {upb=false;}


	red = ofToString(r);
	green = ofToString(g);
	blue = ofToString(b);

	// proportions math

	raverage = r/(r+g+b);
	gaverage = g/(r+g+b);
	baverage = b/(r+g+b);

	rmap = 1000*raverage;
	gmap = 1000*gaverage;
	bmap = 1000*baverage;
}

//--------------------------------------------------------------
void ofApp::draw(){

	//color of whole screen

	ofSetColor(r,g,b);	
	ofFill();
	ofDrawRectangle(0,0,ofGetWidth(),ofGetHeight());

        // RGB indicators, topleft

	ofSetColor(0);
	ofDrawBitmapString(red,40,40);
	ofDrawBitmapString(green,80,40);
	ofDrawBitmapString(blue,120,40);

	ofSetColor(255,0,0);
	ofFill();
	ofDrawRectangle(40, 45, 20, r);

	ofSetColor(0,255,00);
	ofFill();
	ofDrawRectangle(80, 45, 20, g);

	ofSetColor(0,0,255);
	ofFill();
	ofDrawRectangle(120, 45, 20, b);

	//RGB indicator bottom


	ofSetColor(255,0,0);
	ofFill();
	ofDrawRectangle(500, 555, rmap, 40);
	ofSetColor(0,255,0);
	ofFill();
	ofDrawRectangle((500 + rmap), 555, gmap, 40);
	ofSetColor(0,0,255);
	ofFill();
	ofDrawRectangle((500 + rmap + gmap), 555, bmap, 40);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
