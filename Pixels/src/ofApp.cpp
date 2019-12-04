#include "ofApp.h"

ofVideoPlayer video; //www.youtube.com/watch?v=yuMufoHT4vQeo;
ofTexture texture;
ofPixels pixels, invertedPixels;
int total;

//--------------------------------------------------------------
void ofApp::setup(){

	video.load("Transparency.mp4");
	video.play();

	texture.allocate(video.getWidth(), video.getHeight(), OF_PIXELS_RGBA);
	
        total = video.getWidth() * video.getHeight();

}

//--------------------------------------------------------------
void ofApp::update(){

	video.update();

	if(video.isFrameNew()){

		pixels = video.getPixels();

    		for (int i = 0; i < total; i++){
        		invertedPixels[i] = 255 - pixels[i];
    		}

    	texture.loadData(invertedPixels,  OF_PIXELS_RGBA);

	}

}

//--------------------------------------------------------------
void ofApp::draw(){

	texture.draw(0,0);

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
