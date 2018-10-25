#include <iostream>

using namespace std;

//base class
class Shape{
    public:
         //pure virtual function providing interface framework.
         virtual getArea() = 0;

         void setWidth(int w){
            width = w;
         }

         void setHeight(int h){
            height = h;
         }

         void setRadius(int r){
            radius = r;
         }
    protected:
        int width, height, radius;
};

// Derived class
class Rectangle: public Shape{
    public:
        int getArea(){
            return(width * height);
        }
        int getPerimeter(){
            return(2*(width+height));
        }
};

class Circle: public Shape{
    public:
        int getArea(){
            return(3.142 * radius * radius);
        }
        int getCircumference(){
            return(3.142 *(2*radius));
        }
};

int main()
{
    Rectangle Rect;
    Circle Circle1;

    Rect.setWidth(5);
    Rect.setHeight(7);

    cout << "*****************************************************\n";
    //print the area of the object
    cout << "Total Rectangle Area: " << Rect.getArea()<<endl;
    //print the perimeter of the object.
    cout << "Total Rectangle Perimeter: " << Rect.getPerimeter()<< endl;
    cout << "____________________________________________________\n";
    cout << "_____________________________________________________\n";
    Circle1.setRadius(14);
    //print the Area of the object.
    cout << "Total Circle Area: "<< Circle1.getArea() << endl;

    //print the circumference of the circle;
    cout << "Total Circle Perimeter: "<< Circle1.getCircumference()<< endl;

    cout << "*****************************************************\n";
    return 0;
}
