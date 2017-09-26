#pragma once
#include "ofMain.h"


class imageStuff {

public:
    imageStuff();

    
    string imgStamp(int numIndex,char setFormat,string ext);
    
    void imgIter(vector<ofImage>&images);
    ofImage imgBuffer( string path, string stamp );
    void imgDraw();
    void imgFormat(int numIndex,char setFormat,string path,string ext);
    std::vector<ofImage> imgVector(int init,int limit);



private:
	ofImage image;
	int numImages,num;
	char setW;
	string stamp,extension,imgDir;
	




};
