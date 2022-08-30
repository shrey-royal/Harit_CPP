//aggregation is a relationship between two classes where one class is a part of another class.

#include<iostream>
#include<string.h>
#include "Address.cpp"

using namespace std;

class Student {
    
    private:
    int rollno;
    char name[20];
    int marks;
    Address* address;    //aggregation
    
    public:
    Student(int rollno, char name[20], int marks, Address* address) {
        this->rollno = rollno;
        strcpy(this->name, name);
        this->marks = marks;
        this->address = address;
    }

    void displayDetails() {
        cout<<"Rollno: "<<rollno<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
        cout<<"City: "<<address->city<<endl;
        cout<<"State: "<<address->state<<endl;
        cout<<"Pincode: "<<address->pincode<<endl;
    }
};

int main(){
    Address add = Address("Pune", "Maharashtra", 411037);
    Student st = Student(1, "Rajesh", 90, &add);

    st.displayDetails();

    return 0;
}