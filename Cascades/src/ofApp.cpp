#include "ofApp.h"


ofPoint pos;
int r, g, b;

//--------------------------------------------------------------
void ofApp::setup(){


	r = 200;	
	g = 200;

}

//--------------------------------------------------------------
void ofApp::update(){

	auto maxWidth = ofGetWidth();
	pos.x = ofMap(sin(ofGetElapsedTimef()), -1, 1, 0.0, maxWidth);
	
	b = ofMap(sin(ofGetElapsedTimef()), -1, 1, 0.0, 255);

}

//--------------------------------------------------------------
void ofApp::draw(){

	ofSetColor(r,g,b);
	ofFill();

	for (int i = 1; i < 11; i++) {

		pos.y = i*70;
		ofDrawCircle(pos, 20);

	}


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
