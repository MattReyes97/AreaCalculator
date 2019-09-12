//
//  Circle.cpp
//  A8C++2
//
//  Created by Matthew Reyes.
//  Copyright © 2018 Matthew Reyes. All rights reserved.
//
#include <stdio.h>
#include <iostream>
#include "Circle.h"
using namespace std;
Circle::Circle(long int cX,long int cY, double rad){
    centerX=cX;
    centerY=cY;
    radius=rad;
    
 
    
    
    cout<< "the area of the circle is: "<<calcArea()<<endl;;
    
    
}

long int Circle::getCenterX(){
    
    return centerX;
    
};
long int Circle::getCenterY(){
    
    return centerY;
};
double Circle::calcArea(){
    area=3.14159*radius*radius;
    return area;
    
}


