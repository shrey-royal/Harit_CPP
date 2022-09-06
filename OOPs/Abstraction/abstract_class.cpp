//Abstract class in C++ is a class that contains at least one pure virtual function. A pure virtual function is a virtual function for which we do not have any definition. Abstract class cannot be used to create objects. It can only be used as a base class. A pure virtual function is specified by placing "= 0" in its declaration. For example, the following class contains a pure virtual function.

#include <iostream>
using namespace std;

class Base {    // Abstract class
public:
    virtual void show() = 0; // pure virtual function
};

class Derived: public Base {
public:
    void show() { cout << "In Derived" << endl; }
};

int main(void) {
    // Base b;
    // b.show();
    Derived d = Derived();
    d.show();
    return 0;
}

// create a class Shape with draw method and create two classes Circle and Rectangle which extends Shape class and implement draw method.