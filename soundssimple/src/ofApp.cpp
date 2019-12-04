#include "ofApp.h"

ofPoint mid;
int r,g,b;

//--------------------------------------------------------------
void ofApp::setup(){

	float spectrum;

	soundPlayer.load("data/Deon.wav");
	soundPlayer.play();

	r = 255;
	b = 255;

	mid.x = ofGetWidth()/2;
	mid.y = ofGetHeight()/2;

	ofBackground(0);

}

//--------------------------------------------------------------
void ofApp::update(){

 	float * val = ofSoundGetSpectrum(nBandsToGet);		// request 128 values for fft
	for (int i = 0;i < nBandsToGet; i++){

		// let the smoothed value sink to zero:
	fftSmoothed[i] *= 0.96f;

		// take the max, either the smoothed or the incoming:
	if (fftSmoothed[i] < val[i]) fftSmoothed[i] = val[i];

	}

	g = ofMap(fftSmoothed[1], 0, 1, 0, 255);



}

//--------------------------------------------------------------
void ofApp::draw(){

	cout << fftSmoothed[1] << "\t" << g << endl;



	ofSetColor(r,g,b);
	ofFill();
	ofSetCircleResolution(100);
	ofDrawCircle(mid, 200);

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
