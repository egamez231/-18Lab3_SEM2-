#include <iostream>
//#include"Rectangle.h"
using namespace std;

class Rectangle{
    int width;
    int height;
    public:
        void set_values(int,int);
        int area();
        void input_user (int,int);
};

int main()
{
    int x,y;
    Rectangle rect;
    rect.input_user(x,y);
    cout<<"area: " << rect.area() << endl;

return 0;
}

void Rectangle::set_values(int x,int y){
    width=x;
    height=y;
}

int Rectangle::area(){
return width*height;
}

void Rectangle::input_user(int x, int y){

    cout << "Input Width :" ;
    cin >> x;
    width = x;
    cout << "Input Height :" ;
    cin >> y;
    height = y;
}
