#include<iostream>
#include<exception>
using namespace std;

class DivideByZeroException : public exception {
    public:
        const char* what() const throw() {
            return "Division by zero is not possible";
        }
};

int main(){
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    try{
        if(b == 0) {
            throw DivideByZeroException();
        }
        cout << "a/b = " << a/b << endl;
    }catch(DivideByZeroException e){
        cout << e.what() << endl;
    }

    return 0;
}