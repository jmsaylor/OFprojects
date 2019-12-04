#include "ofApp.h"

ofPoint point;

int x, y;

//--------------------------------------------------------------
void ofApp::setup(){


	ofBackground(200);

}

//--------------------------------------------------------------
void ofApp::update(){


	x = ofMap(ofRandomuf(), 0, 1, 0, ofGetHeight());

	y = ofMap(ofGetElapsedTimef(), 0, 100, 0, ofGetWidth());

	point.x = x;
	point.y = y;

}

//--------------------------------------------------------------
void ofApp::draw(){

	ofSetColor(200,200,255);
	ofFill();
	ofDrawCircle(point, 50);

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
