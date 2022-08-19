#include<iostream>
using namespace std;

//copy constructor

class Sample{
    public:
    int a;
    
    Sample(int x){  //default constructor
        a=x;
    }

    Sample(Sample &s){  //copy constructor
        a=s.a;
    }
};

int main(){
    Sample s1(10);  //default constructor will be called here
    Sample s2(s1);  //copy constructor will be called here
    cout<<s2.a<<endl;
    return 0;
}

/*
Task :- 

1. Create a class with a default constructor that scans name from the user and stores it in a variable, now you have to make a copy constructor that actually prints that name.

*/