//Overriding in cpp is done by using the same function name and same parameters in the derived class as in the base class.

#include <iostream>
using namespace std;

class People{
    public:
        void talk(){
            cout<<"People can talk"<<endl;
        }
};

class Man : public People{
    public:
        void talk(){    //override
            cout<<"Man talk less..."<<endl;
        }
};

int main(){
    Man m;
    m.talk();
    
    return 0;
}

/*
Task -: create a class called animal and take another class dog and take a method as eating and override that method.
*/