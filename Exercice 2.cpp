#include <iostream>
using namespace std;
class Shape
{
protected:
  float x, y;
public:
  Shape(float a, float b)
  {
    x = a;
    y = b;
  }
};
class Rectangle: public Shape
{
public:
  Rectangle(float a, float b) : Shape(a, b) {}
  float area()
  {
    return (x * y);
  }
};
class Triangle: public Shape
{
public:
  Triangle(float a, float b) : Shape(a, b) {}
  float area()
  {
    return (x * y / 2);
  }
};
int main (){
  Rectangle rectangle(2,3);
  Triangle triangle(2,3);
  cout <<"  l'aire de rectangle est : "<< rectangle.area() << endl;   //6
  cout <<"  l'aire de triange est : "<<triangle.area() << endl;    //3 
  return 0;}
