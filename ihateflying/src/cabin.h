//
//  cabin.h
//  ihateflying
//
//  Created by Andrew Lovett Barron on 2013-04-13.
//
//

#ifndef __ihateflying__cabin__
#define __ihateflying__cabin__


#endif /* defined(__ihateflying__cabin__) */

#include "ofMain.h"
#include "ofx3DModelLoader.h"

class Cabin : public ofx3DModelLoader {
    
public:
    Cabin();
    ~Cabin();

    
    
private:
    ofVec3f loc;
    ofVec3f rot;

    
    
};

/*

 ofx3DModelLoader();
 ~ofx3DModelLoader();
 
 void loadModel(string modelName, float scale = 1.0);
 void setPosition(float x, float y, float z);
 void setScale(float x, float y, float z);
 void setRotation(int which, float angle, float rot_x, float rot_y, float r_z);
 void draw();
 
 vector <float> rotAngle;
 vector <ofPoint> rotAxis;
 ofPoint scale;
 ofPoint pos;
 
 int numRotations;
 ofx3DBaseLoader * model;

*/