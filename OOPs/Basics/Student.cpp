/*
Task-: 

Create a student class which have two methods (scanStudetnDetails, DisplayStudentDetails), take at least 5 class members and display the student details.

when we use <> while declaring the header file,  then it will find that file only in INCLUDE directory. if file not found then throw error.

when we use "" while declaring the header file, then it will find that file first in INCLUDE directory, if file not found thenit will search in current directory. after that file is not found anywhere then throw error.
*/



#include<iostream>
// #include"Employee.cpp"
using namespace std;

// int main(){

//     Employee e1;

//     e1.scanEmployeeDetails();
//     e1.displayEmployeeDetails();

//     return 0;
// }


/*
Access Specifiers: 
-> Access Specifiers are used to restrict the access of a member of a class.

-> 3 types of Access Specifiers:
    1. Public: 
        -> Public members can be accessed by any other class.
    2. Private:
        -> Private members can be accessed only by the class itself.
    3. Protected:
        -> Protected members can be accessed by any class that inherits from the class.

*/


class Student{
    private:
    int rollNo, std, age;
    long int phoneNo;
    char name[20], school_name[50];

    public:
    void scanStudentDetails(){
        cout<<"Enter Roll No: ";
        cin>>rollNo;
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Age: ";
        cin>>age;
        cout<<"Enter Phone No: ";
        cin>>phoneNo;
        cout<<"Enter School Name: ";
        cin>>school_name;
        cout<<"Enter Standard: ";
        cin>>std;
    }

    void displayStudentDetails(){
        cout<<"Roll No: "<<rollNo<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Phone No: "<<phoneNo<<endl;
        cout<<"School Name: "<<school_name<<endl;
        cout<<"Standard: "<<std<<endl;
    }
};

int main(){
    Student s1;
    s1.scanStudentDetails();
    s1.displayStudentDetails();
    return 0;
}