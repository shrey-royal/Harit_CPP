/*
Constructor is a special member function that is called automatically when an object is created.

-> A constructor have the same name as the class and have no return type.
-> A Constructor is used to initialize the data members of the class.

-> In CPP we have 2 types of constructors:
    1. Default Constructor (Non Parameterized Constructor):
        -> Default constructor is a constructor without any parameter.

        -> Syntax:
            -> ConstructorName(){
                // Statements
            }


    2. Parameterized Constructor:
        -> Parameterized constructor is a constructor with parameters.

        -> Syntax:
            -> ConstructorName(parameter1, parameter2, parameter3, ...){
                // Code
            }

*/

#include <iostream>
#include <string>
using namespace std;


class Employee{
    private:
        int id;
        string name;
        float salary;

    public:
    // Employee(){
    //     cout << "Default Constructor" << endl;

    //     cout << "Enter Id: ";
    //     cin >> id;
    //     cout << "Enter Name: ";
    //     cin >> name;
    //     cout << "Enter Salary: ";
    //     cin >> salary;
    // }

    Employee(int i, string n, float s){    // Parameterized Constructor
        id = i;
        name = n;
        salary = s;
    }

    void displayEmployeeDetails(){
        cout << "Id: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }

};

int main()
{
    // Employee e1;    // Default Constructor
    // Employee e2(101, "John", 10000);    // Parameterized Constructor

    int id;
    string name;
    float salary;


    cout << "Enter Id: ";
    cin >> id;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Salary: ";
    cin >> salary;

    Employee e2(id, name, salary);

    e2.displayEmployeeDetails();

    return 0;
}


/*
Task-:
    -> Create a class named Student.
    -> Student will have the following data members:
        -> Roll No.
        -> Name
        -> Marks
        -> Standard
        -> Fees
        -> Age
        -> Address
    -> Create a default constructor.
    -> Create a parameterized constructor.
    -> Create a member function named displayStudentDetails.
    -> Create a main function.
    -> Create an object of Student class.
    -> Call the displayStudentDetails function.
*/