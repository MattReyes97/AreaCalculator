//
//  Rectangle.h
//  A8C++2
//
//  Created by Matthew Reyes
#ifndef Rectangle_h
#define Rectangle_h
#include<iostream>
#include "BasicShape.h"




class Rectangle: public BasicShape{
private:
    long int length;
    long int width;
public:
    Rectangle(long int ,long int );
    long int getWidth();
    long int getLength();
 virtual double calcArea();
    
    
};






#endif /* Rectangle_h */
