#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){


	ofBackground(0);

}

//--------------------------------------------------------------
void ofApp::update(){

 //learn how to for loop all over the screen -  ofMap? 

	line.addVertex(100,100);
	line.addVertex(150, 150);
	line.addVertex(200,100);
	line.addVertex(250,150);
	line.addVertex(300,100);

}

//--------------------------------------------------------------
void ofApp::draw(){

	ofSetLineWidth(2.0);
	ofSetColor(200,200,255);

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
