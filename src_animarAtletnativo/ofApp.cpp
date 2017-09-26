#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){


	/*for(int i=0;i<=7;i++){
	ofImage c;
	c=a.imgBuffer("Pies/Pies",a.imgStamp(5,'0',i,7,true,"png"));
	v.push_back(c);
	cout<<"stamp reviwe"<<endl;
	cout<<a.imgStamp(5,'0',i,7,true,"png")<<endl;
}*/

	ofBackground(255,50,100);

scale=0.3;
	a.imgFormat(5,'0',"Pies/sinFondo/Pies","png");
	v=	a.imgVector(0,7);






	cout<<"vector size:"<<endl;
	cout<<v.size()<<endl;

	 w=v[0].getWidth();
	 h=v[0].getHeight();
	 sW=w*scale;
	 sH=h*scale;
	 for (unsigned int i = 0; i < v.size(); ++i)
	 {
	 	v[i].resize(sW,sH);
	 }
	 cout<<w<<endl;
	cout<<h<<endl;
	cout<<v[0].getWidth()<<endl;
	cout<<v[0].getHeight()<<endl;
	



}

//--------------------------------------------------------------
void ofApp::update(){

	frames = ofGetFrameNum() % v.size();
	mapeaMouse = ofMap(ofGetMouseX(), 0, ofGetWidth() -1, 1, 30);

	

	ofSetFrameRate(mapeaMouse);

}

//--------------------------------------------------------------
void ofApp::draw(){
	
	v[frames].draw(0,0);
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
