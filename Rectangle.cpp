//
//  Rectangle.cpp
//  A8C++2
//
//  Matthew Reyes
//  Copyright © 2018 Matthew Reyes. All rights reserved.
//

#include <stdio.h>
#include "Rectangle.h"


using namespace std;

Rectangle::Rectangle(long int l, long int w){
    length=l;
    width=w;
  
  
    cout<<"the area of the rectangle is:"<<calcArea()<<endl;
    
}
long int Rectangle:: getWidth(){
    return width;
}
long int Rectangle:: getLength(){
    
    return length;
}
double Rectangle::calcArea(){
    
    area= length*width;
    return area;
}
