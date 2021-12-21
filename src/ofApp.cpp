#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(255);
	ofSetFrameRate(60);

	ps.push_back(ParticleSystem(ofVec2f(ofGetWidth()/2,30)));
}

//--------------------------------------------------------------
void ofApp::update(){
	for (int i = 0; i < ps.size(); i++)
	{
		ps[i].update();
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	for (int i = 0; i < ps.size(); i++)
	{
		ps[i].draw();
	}
	
	
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
	/*ps.push_back(ParticleSystem(ofVec2f(x,y)));*/
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
