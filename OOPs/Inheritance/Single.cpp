/*
Inheritance -> it is a way of reusing the code of another class.

There are 5 types of inheritance:
    1. Single Inheritance - one base, one derived class
    2. Multiple Inheritance - multiple base classes, one derived class
    3. Hierarchical Inheritance - one base class, multiple derived classes
    4. Multilevel Inheritance - multiple base classes, multiple derived classes
    5. Hybrid Inheritance - mixed inheritance

protected -> it is a member of the class and it is accessible to the class and its derived classes.

inheritance has following terms: 
    1. Base class -> parent class, super class
    2. Derived class -> child class, sub class
*/

#include <iostream>
using namespace std;

class Calculator{
    private:
        int a,b;

    protected:
        int add(int x,int y){
            return x+y;
        }

        int sub(int x,int y){
            return x-y;
        }

        int mul(int x,int y){
            return x*y;
        }

        int div(int x,int y){
            return x/y;
        }
};

class User : private Calculator{
    private:
        int c, d;
    public:
        void getdata(){
            cout<<"Enter two numbers: ";
            cin>>c>>d;
        }

        void display(){
            cout<<"Addition: "<<add(c,d)<<endl;
            cout<<"Subtraction: "<<sub(c,d)<<endl;
            cout<<"Multiplication: "<<mul(c,d)<<endl;
            cout<<"Division: "<<div(c,d)<<endl;
        }
};

int main(){
    User u;
    u.getdata();
    u.display();

    return 0;
}

/*


Example

#include <iostream>
#include <string.h>
using namespace std;

class School{
    private:
        string school_name[10] = {
            "St. Xavier's",
            "St. Mary's",
            "St. Joseph's",
            "St. Peter's",
            "St. Paul's",
            "St. John's",
            "St. Luke's",
            "St. Thomas's",
            "St. Joseph's",
            "St. Peter's"
        };

    public:
        void display_school(){
            cout << "School name :-  \n";
            for(int i=0; i<10; i++){
                if(i%3 == 0)
                    cout << endl;
                cout << school_name[i] << ",\t";
            }
        }
};

class Student : private School{
    private:
        int roll;
        char name[50];
        float marks;
        string school;

    public:
        void getdata(){
            cout<<"Enter roll: ";
            cin>>roll;
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter marks: ";
            cin>>marks;

            cout << "\nChoose School: ";
            display_school();
            cin>>school;
            // getline(cin, school);
        }
        void display(){
            cout<<"Roll: "<<roll<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Marks: "<<marks<<endl;
            cout<<"School: "<<school<<endl;
        }
};

int main(){
    Student s;

    s.getdata();
    s.display();

    return 0;
}

Task :- 
create a calculator class with pow, sqrt, log, sin, cos, tan, cot, sec, csc, exp functions.


Task :-
    Create a class called Company and create a class called Employee.
    Comapny class will have following members:
        1. Name of the company
        2. Address of the company
        3. Phone number of the company
        4. Website of the company
    Methods in Company class:
        0. Scan the company details
        1. Display company details

    Employee class will have following members:
        1. Name of the employee
        2. Address of the employee
        3. Phone number of the employee
        4. Email of the employee
        5. Salary of the employee
        6. Designation of the employee
        7. Department of the employee

    Methods in Employee class:
        0. Scan the employee details
        1. Display employee details
        2. Display the salary of the employee
        3. Display the tax of the employee -> tax will be 10% of the salary

*/