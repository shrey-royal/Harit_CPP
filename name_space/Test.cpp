//Namespace -> Class -> Method -> Parameters

#include<iostream>
using namespace std;    //Namespace

/*
A Standard namespace is used to define the standard library functions and classes.
*/

namespace Hari{
    void sayHello(){
        cout<<"Hello from Hari"<<endl;
    }
}

namespace Ram{
    void sayHello(){
        cout<<"Hello from Ram"<<endl;
    }
}

using namespace Ram;
int main(){
    // Hari::sayHello();
    // Ram::sayHello();

    sayHello();
    // Hari::sayHello();

    cout << "Hello World" << endl;
    
    return 0;
}