/*

Q. What is Exception?
A. Exception is a run time error which occurs when the program is running.

Exception Handling in cpp is a mechanism to handle the run time errors.

> try block is used to check the exception.
> catch block is used to handle the exception.
> throw block is used to throw the exception.

*/

#include<iostream>
#include<exception>
using namespace std;

int main() {
    int a, b;

        cout << "Enter a: ";
        cin >> a;
        cout << "Enter b: ";
        cin >> b;



    try{ 
        if(b == 0) {
            throw "Division by zero is not possible";
        }

        cout << "a/b = " << a/b << endl;    //exception may occur here
    }catch(const char* msg){
        cout << msg << endl;
    }

    return 0;    
}

/*
you have to take one int variable and scans a value for that variable if the value is out of the range of int then it will throw an exception and catch that exception in the catch block and print "out of range" and if the value is in the range of int then it will print the value of that variable.
*/