#include "ofApp.h"

ofVideoGrabber camera;
int camw, camh;

//--------------------------------------------------------------
void ofApp::setup(){

	camw = 320;
	camh = 240;

	vector<ofVideoDevice> devices = camera.listDevices();

	for(size_t i=0; i < devices.size(); i++) {
		if(devices[i].bAvailable){
			ofLogNotice() << devices[i].id << ": " << devices[i].deviceName;
		}else{
			ofLogNotice() << devices[i].id << ": " << devices[i].deviceName << "- unavailable";
		}
	}

	camera.setDeviceID(0);
	camera.setDesiredFrameRate(60);
	camera.initGrabber(camw, camh);

}

//--------------------------------------------------------------
void ofApp::update(){

	camera.update();

}

//--------------------------------------------------------------
void ofApp::draw(){

	int cx, cy;
	cx = 10;

	for ( int j = 0; j< 4; j++){

		cy = 10;

		for ( int y = 0; y < 4; y++) {
			camera.draw(cx,cy);

			cy += camh;
		}
			cx += (camw + 10);
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
