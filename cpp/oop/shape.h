#ifndef SHAPE_H
#define SHAPE_H

class Shape {
protected:
  double height;
  double width;
public:
  Shape();
  Shape(const Shape& orig);
  virtual ~Shape();

  static int numOfShapes;
  Shape(double length);
  Shape(double height, double width); 
  void show();

private:
  

};


#endif  /* end of SHAPE_H */
