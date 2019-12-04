#include "ofApp.h"

std::vector<glm::vec2> points;


//--------------------------------------------------------------
void ofApp::setup(){

	ofBackground(200);

}

//--------------------------------------------------------------
void ofApp::update(){

	int x = ofRandomf(0, ofGetHeight());
	int y = ofMap(ofGetElapsedTimef(), 0, 200, 0, ofGetWidth());

	points.push_back(x,y);

}

//--------------------------------------------------------------
void ofApp::draw(){

	ofSetColor(100,255,100);
	ofFill();

	for (int i = 0; i < points.size(); i++) {

		ofDrawCircle(points[i], 30);

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
