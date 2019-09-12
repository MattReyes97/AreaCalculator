//
//  BasicShape.h
//  A8C++2
//
//  Created by Matthew Reyes on 12/6/18.
//  Copyright © 2018 Matthew Reyes. All rights reserved.
//

#ifndef BasicShape_h
#define BasicShape_h

class BasicShape{
public:
    double area;
public:
    double getArea();
    virtual double calcArea()=0;
    
};



#endif /* BasicShape_h */
