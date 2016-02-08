#include "ofApp.h"
#include "math.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetCircleResolution(100);
	ofSetLineWidth(1);
	ofSetFrameRate(60);
}

//--------------------------------------------------------------
void ofApp::update(){
	double d_tmp; //計算用
	x = mouseX - ofGetWidth()/2;
	y = mouseY - ofGetHeight()/2;
	r = sqrt(x*x + y*y);
	d_tmp = atan2(y, x)*255/(M_PI*2);
	if(d_tmp <= 0){
		d_tmp *= (-1);
	} else {
		d_tmp = 255 - d_tmp;
	}
	d = d_tmp;
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(255, 255, 255);
	color.setHsb(d, 255, 255);
	ofSetColor(color, 255);
	ofFill();
	ofCircle(ofGetWidth()/2, ofGetHeight()/2, r/4);
	ofLine(ofGetWidth()/2, ofGetHeight()/2, mouseX, mouseY);
	ofNoFill();
	ofCircle(ofGetWidth()/2, ofGetHeight()/2, r);
	
	/*デバッグ用
	ofSetColor(0);
	ofDrawBitmapString(ofToString(d), ofGetWidth()*5/7, ofGetHeight()*6/7);
	*/
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

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

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
