//Matthew Reyes
//Assignment 8



#include<iostream>
#include "Rectangle.h"
#include "Circle.h"

using namespace std;


int main()
{
    long int x1,y2,rad1,l1,w1;
    
    cout<<"enter circle x intercept:";
    cin>>x1;
    cout<<"enter circle y intercept:";
    cin>>y2;
    cout<<"enter circle radius:";
    cin>>rad1;
    
    cout<<"enter rectangle lenght:";
    cin>>l1;
    cout<<"enter rectangle width:";
    cin>>w1;
    
    Circle b(x1,y2,rad1);
    Rectangle a(l1,w1);
   
    
    
    
    
    
    
}
