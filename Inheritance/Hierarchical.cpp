/*
In Hierarchical inheritance we will have one base class and multiple derived classes.
*/

#include <iostream>
using namespace std;

class Animal{
    public:
        void eat(){
            cout<<"Animal is eating"<<endl;
        }
};

class Dog : public Animal{
    public:
        void bark(){
            cout<<"Dog is barking"<<endl;
        }
};

class Cat : public Animal{
    public:
        void meow(){
            cout<<"Cat is meowing"<<endl;
        }
};

int main(){
    Dog d;
    d.bark();
    d.eat();
    Cat c;
    c.meow();
    c.eat();
    return 0;
}