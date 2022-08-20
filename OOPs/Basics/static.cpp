// static keyword

/*
Static is a keyword in cpp that is used to declare a static member of a class.
once static member is declared, it is shared by all the objects of the class.

*/

#include<iostream>
using namespace std;

class Student{
    private:
        int roll;
        string name;
        static int count;   //static member

    public:
        Student(int roll, string name){
            this->roll = roll;
            this->name = name;
            count++;    //static member is incremented
        }
        void display(){
            cout<<"Roll: "<<roll<<endl;
            cout<<"Name: "<<name<<endl;
        }

        void CalculateCount(){
            cout<<"Count: "<<count<<endl;
        }
};

int Student::count = 0; //static member is initialized
// :: is a scope resolution operator

int main(){
    Student s(1, "John"), s1(2, "Jane"), s2(3, "Jack"); //count++ is called for each object
    
    s.display();
    s1.display();
    s2.display();

    s.CalculateCount();
    return 0;
}


/*
Task on static member

1. create a class called Chaiwala that has a static member called count.
-> count should be initialized to 0.
-> count should be incremented by 1 for each object of the class.
-> create 2 methods in the class called makechai and countchai.

2. create a main function and create 3 objects of the class.
-> call the makechai method for each object.
-> call the countchai method

*/