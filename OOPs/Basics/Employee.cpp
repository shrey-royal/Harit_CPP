#include<iostream>
#include<string.h>
using namespace std;

class Employee{
    int id;
    char name[20];
    float salary;

    public:
    void scanEmployeeDetails(){
        cout << "\nEnter id: ";
        cin >> id;

        cout << "\nEnter name: ";
        cin >> name;

        cout << "\nEnter salary: ";
        cin >> salary;
    }


    void displayEmployeeDetails(){
        // cout << "\nId: " << id;
        // cout << "\nName: " << name;
        // cout << "\nSalary: " << salary;

        cout << "\n" << id << "\t" << name << "\t" << salary;
    }
};

int main(){
    Employee e, e1, e2;

    e.scanEmployeeDetails();
    e1.scanEmployeeDetails();
    e2.scanEmployeeDetails();

    cout << "\nId\tName\tSalary\n";
    e.displayEmployeeDetails();
    e1.displayEmployeeDetails();
    e2.displayEmployeeDetails();

    return 0;
}