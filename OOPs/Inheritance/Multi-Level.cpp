//Multilevel Inheritance

#include<iostream>
using namespace std;

class Animal {
    public:
        void eat() {
            cout << "eating" << endl;
        }
};

class Dog : public Animal {
    public:
        void sleep() {
            cout << "sleeping" << endl;
            // eat();
        }
};

class Cat : public Dog {
    public:
        void meow() {
            cout << "meowing" << endl;
        }
};

int main() {
    Cat cat;
    cat.eat();
    cat.sleep();
    cat.meow();
    return 0;
}

/*
Task :- 

    -> Create 3 classes called (Grandfather, Father, Son) and each have 2 different methods.
    -> call those methods using the son class.

*/