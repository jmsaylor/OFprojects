#include "ofApp.h"

ofPolyline line;
ofPoint pt;
int x, y;

//--------------------------------------------------------------
void ofApp::setup(){

	ofBackground(0);

}

//--------------------------------------------------------------
void ofApp::update(){

	y = ofRandom(0, ofGetHeight());
	x = ofRandom(0, ofGetWidth());

	pt.set(x,y);

	line.addVertex(pt);

}

//--------------------------------------------------------------
void ofApp::draw(){

	line.draw();

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

	line.clear();

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
