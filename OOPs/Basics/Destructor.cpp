//A Destructor is a special method that is called when an object is destroyed.

#include<iostream>
using namespace std;

class Sample{

    public:
        Sample(){  //default constructor
            cout << "Default Constructor" << endl;
        }
    
        ~Sample(){  //destructor
            cout<<"Destructor called"<<endl;
        }
};

int main(){
    Sample s1;
    Sample s2;
    return 0;
}