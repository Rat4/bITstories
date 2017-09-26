#include"imageStuff.h"

imageStuff::imageStuff(){





}
string imageStuff::imgStamp(int numIndex,char setFormat,string ext){

	
	numImages=numIndex;

	
	stringstream buFFer;
	buFFer<<setfill(setFormat)<<setw(numIndex)<<num<<"."<<ext;

	buFFer>>stamp;

	
return stamp;
}


ofImage imageStuff::imgBuffer(string path, string stamp){
	
	string fullPath = path+stamp;
	image.load(fullPath);	

	return image;
}

void imageStuff::imgFormat(int numIndex,char setFormat,string path,string ext){

	numImages=numIndex;
	setW=setFormat;
	extension=ext;
	imgDir=path;

}
std::vector<ofImage> imageStuff::imgVector(int init,int limit){

std::vector<ofImage> imagenesV;
	for (int i = init; i <=limit; ++i)
	{
		stringstream buffer;
		buffer<<setfill(setW)<<setw(numImages)<<i<<"."<<extension;
		string imgNumber;
	buffer>>imgNumber;

	string fullPath = imgDir+imgNumber;
	image.load(fullPath);	
		imagenesV.push_back(image);
	}



	return imagenesV;
}

