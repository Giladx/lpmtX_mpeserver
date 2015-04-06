#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(30);
	server.setup("mpe_server_settings.xml");
	logo.loadImage("baner.png");
    ofxXmlSettings settings;
	if(!settings.loadFile("mpe_server_settings.xml")){
		ofLog(OF_LOG_ERROR, "MPE Server -- Couldn't load settings file: mpe_server_settings.xml");
		return;
	}

	fps = settings.getValue("settings:framerate", 30, 0);
    port = settings.getValue("settings:port", 9002, 0);
    nclients = settings.getValue("settings:numclients", 2, 0);

    gui0 = new ofxUISuperCanvas("Parameters");
    gui0->addMinimalSlider("port", 9000, 9999, 9002);
    gui0->addMinimalSlider("fps", 24, 30, 30);
    gui0->addMinimalSlider("client num.", 2 , 20, 6);
    gui0->addButton("run lpmtx client", lpmtxrun);
}
//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(0);
	ofSetColor(255,255,255);
	ofEnableAlphaBlending();
	logo.draw(0,10);
	ofDisableAlphaBlending();
    ofSetColor(255);
	ofDrawBitmapString("LPMTX MPE Server Running", ofPoint(290, 30) );
	ofDrawBitmapString("On Port "+ofToString(port)+" With FPS "+ofToString(fps), ofPoint(290, 45) );
	ofDrawBitmapString("Number Of Expected Clients:  "+ofToString(nclients), ofPoint(290, 60) );
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
