//friend function
/*
#include<iostream>
using namespace std;

class Harit{
    private:
    int bedroom;

    public:
    Harit():bedroom(0){}    //default constructor / initializaing private data member
    friend int enterBedroom(Harit); //friend function
};

int enterBedroom(Harit h){  //friend function definition
    return h.bedroom+2;
}


int main(){
    Harit hari;
    cout << "harit's bedroom have " << enterBedroom(hari) << " beds" << endl;
}

*/

// class A{
//     private:
//         int a;

//     public:
//         void set_a(int x){
//             a = x;
//         }

//     friend void min(A,B);
// };

// class B{
//     private:
//         int b;

//     public:
//         void set_b(int x){
//             b = x;
//         }

//     friend void min(A,B);
// };

// void min(A a, B y){
//     if(a.a < y.b){
//         cout << "a is smaller" << endl;
//     }
//     else{
//         cout << "b is smaller" << endl;
//     }
// }
