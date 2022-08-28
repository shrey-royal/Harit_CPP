#include<iostream>
using namespace std;

class GrandParents{
public:
    void Property(){
        cout<<"GrandParents have more than 100 crore worth of property"<<endl;
    }
};

class Father : public GrandParents{
public:
    void Wants_Property(){
        cout<<"Father wants property of grandparents"<<endl;
    }
};

class Mother : public GrandParents{
public:
    void Help(){
        cout<<"Mother helps Father in getting the property of grandparents"<<endl;
    }
};

class Son : public Father, public Mother{
public:
    void Has_Property(){
        cout<<"Son has property of grandparents"<<endl;
    }
};

int main(){
    Son s;
    s.Has_Property();
    s.Wants_Property();
    s.Help();
    s.Mother::Property();
    s.Father::Property();
    return 0;
}