#include "ofApp.h"
#include <math.h>

//--------------------------------------------------------------
void ofApp::setup(){
	move = 0.5;
}

//--------------------------------------------------------------
void ofApp::update(){
	int size = sizeof(pixels) / sizeof(char);
	move+=0.1;
	phase = 0.0;
	phaseD = TWO_PI / 100.0;
	phase += move;
	for (int i = 0; i < size; i++) {
		phase += phaseD;
		pixels[i] = (sinf(phase) + 1) / 2 * 255.0;
		
		
	}
	tex.loadData(pixels, 100, 100, GL_LUMINANCE); 
}

//--------------------------------------------------------------
void ofApp::draw(){
	tex.draw(0, 0, ofGetWidth(), ofGetHeight());
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