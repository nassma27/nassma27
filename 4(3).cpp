
#include <iostream>
using namespace std;
typedef enum {
RECTANGLE, TRIANGLE, SQUARE, CIRCLE } t_shape;
// Base class to define a shape
class shape
{
protected:
unsigned int n_width;
unsigned int n_height;
t_shape n_type;
public:
virtual void SetValues(unsigned int width, unsigned int height, t_shape type)
{
n_width = width;
n_height = height;
n_type = type;
}
};
// End of class shape
// Derived Class to define a Polygon
class Polygon: public shape
{
protected:
unsigned int n_width;
unsigned int n_height;
t_shape n_type;
public:
void SetValues(unsigned int width, unsigned int height, t_shape type)
{
n_width = width;
n_height = height;
n_type = type;
}
}; // End of class Polygon
// Derived class from Polygon to define a square
class Square : public Polygon
{
public:
unsigned int area()
{
unsigned int result;
if (n_type == SQUARE)
{
result = n_width * n_width;}
else
{
result = 0;
}
return result;
}
}; // End of class SQUARE
// Derived class from Polygon to define a Rectangle
class Rectangle : public Polygon
{
public:
unsigned int area()
{
unsigned int result;
if (n_type == RECTANGLE)
{
result = n_width * n_height;
}
else
{
result = 0;
}
return result;
}
}; // End of class RECTANGLE
// Derived class from Polygon to define a Triangle
class Triangle : public Polygon
{
private:
unsigned int n_long;
public:
unsigned int area()
{
unsigned int result;
if (n_type == TRIANGLE)
{
result = (n_width * n_height) / 2;
}
else
{
result = 0;
}
return result;
}
}; // End of class Triangle
// Derived class from shape to define a Elipes
class Elipes : public shape
{
protected:
unsigned int n_width;
unsigned int n_height;
unsigned int n_pi;
t_shape n_type;
public:
void SetValues(unsigned int width, unsigned int height, t_shape type)
{
n_width = width;
n_height = height;
n_type = type;
}
};
// End of class Elipes
// Derived class from Elipes to define a circle
class circle : public Elipes
{
public:
unsigned int area()
{
unsigned int result;
if (n_type == CIRCLE)
{
result = 2 * n_height;
}
else
{
result = 0;
}
return result;
}
}; // End of class circle
int main()
{
// Create rectangle, triangle, square and circle objects
Rectangle R;
Triangle T;
Square S;
circle c;
// Use the inherited "SetValues" function to assign values to the


R.SetValues(3,1, RECTANGLE);
T.SetValues(4,18, TRIANGLE);
S.SetValues(10,5, SQUARE);
c.SetValues(10,5, CIRCLE);
// Calculate the area of each object using the polymorphic function area()

std::cout << "The Area of Rectangle is : " << R.area() <<std::endl;
std::cout << "The Area of Triangle is : " << T.area() << std::endl;
std::cout << "The Area of Square is : " << S.area() << std::endl;
std::cout << "the Area of circle is : "<< c.area() <<std::endl;
return 0;
}

