//
//  Circle.h
//  A8C++2
//
//  Matthew Reyes .
//




#ifndef Circle_h
#define Circle_h

#include "BasicShape.h"


class Circle:public BasicShape{
    
private:
    long int centerX;
    long int centerY;
    double radius;
public:
    Circle(long int,long int,double);
    long int getCenterX();
    long int getCenterY();
    double calcArea();
};








#endif /* Circle_h */
