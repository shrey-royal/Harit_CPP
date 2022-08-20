// this keyword in cpp

// this keyword in cpp is used to access the current object.

//this keyword refers to the instance varibale of the current class.
//Instance variable is a variable that is present inside the class and outside of any method.

#include <iostream>
using namespace std;

class Student{

    private:
        //class members
        //Instance variable
        int rno, std, marks, age;
        string name, address;
        float fees;

    public:

        Student(){}
        
        Student(int rno, int std, int marks, int age, string name, string address, float fees){
            this->rno = rno;
            this->std = std;
            this->marks = marks;
            this->age = age;
            this->name = name;
            this->address = address;
            this->fees = fees;
        }
        
        //Method
        void displayStudentDetails(){
            cout << "Roll No: " << rno << endl;
            cout << "Standard: " << std << endl;
            cout << "Marks: " << marks << endl;
            cout << "Age: " << age << endl;
            cout << "Name: " << name << endl;
            cout << "Address: " << address << endl;
            cout << "Fees: " << fees << endl;
        }

};

int main(){
    int rno, std, marks, age;
    string name, address;
    float fees;

    cout << "Enter Roll No: ";
    cin >> rno;
    cout << "Enter Standard: ";
    cin >> std;
    cout << "Enter Marks: ";
    cin >> marks;
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Address: ";
    cin >> address;
    cout << "Enter Fees: ";
    cin >> fees;

    Student s1(rno, std, marks, age, name, address, fees);
    s1.displayStudentDetails();
    return 0;
}

/*
task :- 
write this program
*/