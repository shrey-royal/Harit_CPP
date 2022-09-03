//What is Method Overloading?
//Method Overloading is a feature that allows a class to have more than one method having the same name, if their argument lists are different.

#include<iostream>
using namespace std;

class Method_Overloading {
    public:
        Method_Overloading() {
            cout << "Default Constructor" << endl;
        }

        Method_Overloading(int a) {
            cout << "Overloaded Parameterized Constructor" << endl;
        }
};

int main()
{
    //Constructor Overloading
    Method_Overloading obj, obj1(10);
    return 0;
}