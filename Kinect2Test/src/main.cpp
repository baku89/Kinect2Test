#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
//	ofGLWindowSettings settings;
//	settings.setGLVersion(2,2);
//	ofCreateWindow(settings);
	
	
	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofSetupOpenGL(1600, 800, OF_WINDOW);
	ofRunApp(new ofApp());

}
