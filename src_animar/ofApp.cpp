#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	
	dirName="despiece_4/cuerpo/cuerpo_luz/sinFondo";
	//secuencia.push_back(loadImage("cuerpo_luz"+ numImage + ".png")); 
	directorio.listDir(dirName);
	directorio.sort();


	secuencia.resize(directorio.size());
    	for(int i = 0; i < directorio.size(); ++i) {

        cargadorImagenes.loadFromDisk(secuencia[i],directorio.getPath(i));
        //imprime todos los path de las fotos y el numero de fotos
        // en el directorio
        //ofLogNotice(directorio.getPath(i));
        cout<<"numero de fototos"<< "\t"<< directorio.getPath(i)<<endl;
     
	}

	bFrameindependiente=true;

	appfps=60;
	secuencefps=24;
	ofSetFrameRate(appfps);



	//escalar

	 w=1920;
 h=1080;
 scale=0.5;

 scaleW=w*scale;
 scaleH=h*scale;

cout<< w<<h<<endl;


for (int i = 0; i < secuencia.size(); ++i)
{
	secuencia.get().at(i).resize(scaleW,scaleH);

}





}

//--------------------------------------------------------------
void ofApp::update(){
	
	
	
    if(bFrameindependiente){

        // calcula el tiempo del frame basado en el tiempo de la app
        // y del tiempo deseado para la secuencia
        frameindex = (int)(ofGetElapsedTimef() * secuencefps) % secuencia.size();
    }
    else {
        // calcula el frame basado en el conteo de frames de la app
        frameindex = ofGetFrameNum() % secuencia.size();
    }

}

//--------------------------------------------------------------
void ofApp::draw(){

	secuencia[frameindex].draw(0,0);

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
