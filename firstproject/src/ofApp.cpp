#include "ofApp.h"

int r;
int b;
int r2;
int b2;

//--------------------------------------------------------------
void ofApp::setup(){

   ofSetFrameRate(30);

   ofBackground(0,0,0);
   r=0;
   b=0;
   r2=0;
   b2=0;

}

//--------------------------------------------------------------
void ofApp::update(){

   r = r + 2;
   r2 = r2 + 1;

   if (r>255) {r = 0;} 
   if (r2>255) {r2=0;}

   b = b + 1;
   b2 = b + 2;

   if (b>255) {b = 0;}
   if (b2>255) {b2 = 0;}

}

//--------------------------------------------------------------
void ofApp::draw(){

   ofSetColor(r,100,b);
   ofFill();

   ofDrawRectangle(0,0,200,200);


   ofSetColor(r2,50,b2);
   ofFill();

   ofDrawRectangle(200,200,200,200);

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
