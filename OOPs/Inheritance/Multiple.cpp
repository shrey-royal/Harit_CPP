//Multiple Inheritance

#include<iostream>
using namespace std;

class Father{
    protected:
        void roti(){
            cout<<"roti"<<endl;
        }
        void kapda(){
            cout<<"kapda"<<endl;
        }
        void makan(){
            cout<<"makan"<<endl;
        }
};

class Mother{
    protected:
        void cooking(){
            cout<<"cooking"<<endl;
        }
        void washing(){
            cout<<"washing"<<endl;
        }
        void cleaning(){
            cout<<"cleaning"<<endl;
        }
};

class Son : protected Father, protected Mother{
    public:
        void show_off(){
            roti();
            kapda();
            makan();
        }

        void spoil(){
            cooking();
            washing();
            cleaning();
        }
};

int main(){
    Son s;
    s.show_off();
    s.spoil();
    return 0;
}