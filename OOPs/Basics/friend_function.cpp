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

#include<iostream>
using namespace std;

class B;    //forward declaration

class A{
    private:
        int a;

    public:
        void set_a(int x){
            a = x;
        }

    friend void min(A,B);
};

class B{
    private:
        int b;

    public:
        void set_b(int x){
            b = x;
        }

    friend void min(A,B);
};

void min(A a,B b){
    if(a.a < b.b){
        cout << "a is smaller than b" << endl;
    }
    else{
        cout << "b is smaller than a" << endl;
    }
}

int main()
{
    A a;
    B b;
    int x, y;
    cout << "enter 1st number: ";
    cin >> x;
    cout << "enter 2nd number: ";
    cin >> y;

    a.set_a(x);
    b.set_b(y);

    min(a,b);

    return 0;
}

