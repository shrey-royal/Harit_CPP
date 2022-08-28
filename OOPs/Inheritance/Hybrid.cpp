//Hybrid Inheritance - combination of multiple inheritance and thus it is a complex inheritance

#include<iostream>
using namespace std;

class Animal
{
    public:
        void eat()
        {
            cout<<"Eating"<<endl;
        }
};

class Dog: public Animal
{
    public:
        void bark()
        {
            cout<<"Barking"<<endl;
        }
};

class Puppy: public Dog
{
    public:
        void weep()
        {
            cout<<"Weeping"<<endl;
        }
};

class Insects : public Puppy, public Animal{
    public:
        void fly()
        {
            cout<<"Flying"<<endl;
            Puppy::eat();
        }
};


int main(){
    Insects i;
    // i.eat();    //Ambiguity error
    i.bark();
    i.weep();
    i.fly();
    return 0;
}