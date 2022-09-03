//What is Method Overloading?
//Method Overloading is a feature that allows a class to have more than one method having the same name, if their argument lists are different.

#include<iostream>
using namespace std;

class Method_Overloading {
    private:
        int num;
    
    public:
        Method_Overloading() : num(10){}//Default Constructor

        void operator ++() {
            num += 2;
        }

        void print() {
            cout << "The value of num is: " << num << endl;
        }


        // Method_Overloading() {
        //     cout << "Default Constructor" << endl;
        // }

        // Method_Overloading(int a) {
        //     cout << "Overloaded Parameterized Constructor" << endl;
        // }


};

int main()
{
    //Constructor Overloading
    Method_Overloading obj;
    ++obj;  //calling function "void operator ++()"
    obj.print();
    return 0;
}