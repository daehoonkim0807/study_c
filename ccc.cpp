#include <iostream>

class Box {

public : 
    static int objectCount;
    
    // Constructor definition
    Box (double l = 2.0, double b = 2.0, double h = 2.0)
    {
        std::cout << "Constructor called"<< std::endl;
        length = l;
        breadth = b;
        height = h;
        // Increase every time ohject is created
        objectCount++;
    }
    
    double Volume() {
        return length * breadth * height;
    }

    static int getCount() {
        return objectCount;
    }
private :
    double length;
    double breadth;
    double height;
};

int Box::objectCount = 0;

int main(int argc, const char * argv[]) {
    std::cout << "Initial Stage Count: " << Box::getCount() << std::endl;
    
    Box Box1(3.3, 1.2, 1.5);
    Box Box2(8.5, 6.0, 2.0);
    
    std::cout << "Final Stage Count : " <<Box::getCount() << std::endl;
    return 0;
    
}
