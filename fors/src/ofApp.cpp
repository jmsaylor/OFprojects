#include "ofApp.h"

ofPoint a,b,c,d;
ofPolyLine line1;
ofPolyLine line2;
int x, y;

//--------------------------------------------------------------
void ofApp::setup(){
	
	x = 60;
	y = 20;


}

//--------------------------------------------------------------
void ofApp::update(){


	a.set(y, y);
	b.set(x, y);

	x *= 1.2f;

	line1.addVertex(a)
	Line1.addVertex(b)



}

//--------------------------------------------------------------
void ofApp::draw(){

	line1.draw();



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
