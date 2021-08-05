#include"shape.h"
#include<iostream>

Shape::Shape() {}

Shape::Shape(double height, double width)
{
  this->height = height;
  this->width = width;
}


Shape::Shape(double length) {}

Shape::~Shape() = default;

void Shape::show() 
{
  using std::endl;
  using std::cout;
 
  cout<< "height:"<< height <<endl;
  cout<< "width:"<< width <<endl;
}
