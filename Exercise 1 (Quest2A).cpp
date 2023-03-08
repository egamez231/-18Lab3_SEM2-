#include <iostream> // Used to define library of the program. <iostream> are standard input and output library in C++
//#include"Rectangle.h"

using namespace std; //Using namespace std are used to tell the system the directory of the library

//the class structure that consist of their own object in the class.
class Rectangle{
    int width;
    int height;
    public:
        void set_values(int,int); // used to make the private class can be access to gave the value to the variable in the Class
        int area();
};

int main()
{
Rectangle rect, rect1; //define the variable name for the Class.
rect.set_values(5,7); // function call to gave the value to the object in the Class. rect.
rect1.set_values(10,10);
cout<<"area: " << rect.area() << endl;
cout<<"area: " << rect1.area();
return 0;
}



void Rectangle::set_values(int x,int y){ // function in the class is set to public so it can be defined freely outside the class.
width=x;
height=y;
}
int Rectangle::area(){ //  operation function in the Rectangle Class to calculate and return the value.
return width*height;
}
