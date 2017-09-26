#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(24);

	dirName="despiece_4/cuerpo/cuerpo_luz/sinFondo";
//secuencia.push_back(loadImage("cuerpo_luz"+ numImage + ".png")); 
directorio.listDir(dirName);
directorio.sort();


secuencia.resize(directorio.numFiles());
    	for(int i = 0; i < directorio.numFiles(); ++i) {

        cargadorImagenes.loadFromDisk(secuencia[i],directorio.getPath(i));
        //imprime todos los path de las fotos y el numero de fotos
        // en el directorio
        //ofLogNotice(directorio.getPath(i));
        cout<<"numero de fototos"<< "\t"<< directorio.getPath(i)<<endl;
	}

}

//--------------------------------------------------------------
void ofApp::update(){
	
	esto=(int)(100/24)*10;
	//frame = ofGetFrameNum() % secuencia.size();
	frame = (int)(ofGetElapsedTimef()*esto) % secuencia.size();

}

//--------------------------------------------------------------
void ofApp::draw(){

	secuencia[frame].draw(0,0);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

cout << esto << endl;
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
