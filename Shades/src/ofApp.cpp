#include "ofApp.h"

int r, g, b;
int r1, g1, b1;

int sr, sg, sb;
int sr1, sg1, sb1;

int w, h;

//--------------------------------------------------------------
void ofApp::setup(){

	ofSetVerticalSync(false);
	
	ofSetFrameRate(4);

	w = ofGetWidth();
	h = ofGetHeight();


	r = 50;
	g = 255;
	b = 200;

	r1 = 40;
	g1 = 200;
	b1 = 175;


	sr = 1;
	sg = 3;
	sb = 2;

	sr1 = -1;
	sg1 = 3;
	sb1 = 4;

	ofBackground(255);

}

//--------------------------------------------------------------
void ofApp::update(){

	if ( r < 40 || r > 60) {
		r = r * -1;
	}
	
	r = r + sr;

	if ( b1 < 112 || b1 > 180) {
		b1 = b1 * -1;
	}
	
	b1 = b1 + sb1;


}

//--------------------------------------------------------------
void ofApp::draw(){


	ofSetColor(r,g,b,127);
	ofFill();
	ofDrawRectangle(0,0, (w - (w/4)), h);

	ofEnableAlphaBlending();

	ofSetColor(r1,g1,b1,127);
	ofFill();
	ofDrawRectangle((w/4),0,w,h);

	ofDisableAlphaBlending();

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
