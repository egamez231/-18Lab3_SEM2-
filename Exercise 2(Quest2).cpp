#include <iostream>
using namespace std;

class Circle{
        int radius;
    public:
        Circle(int r):radius(r){}
        int area() {return radius*radius*3.14159265;}
};

class Cylinder{
        Circle base;
        int height;
    public:
        Cylinder (int r, int h):base (r),
        height(h){}
        int volume(){
            return base.area()*height;
            }
};


int main(){

    Cylinder cyn(10,20);
    cout<<"cyns's volume: " << cyn.volume()<<endl;

return 0;
}
