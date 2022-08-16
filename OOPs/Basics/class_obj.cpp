#include<iostream>
using namespace std;

class Employee{
    //variable in a class is called class members
    int id;
    public:
    void fun(){
        //function in a class is called class methods
        cout << "Hello World" << endl;
    }
};

int main(){
    //object of class is called class instance
    Employee e, emp, Emp, emp1, emp_n;
    e.fun();
    return 0;
}