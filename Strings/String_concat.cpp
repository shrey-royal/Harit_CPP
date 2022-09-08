#include<iostream>
#include<string>
using namespace std;

int main(){

    string str1, str2;
    
    cout << "Enter string 1: ";
    getline(cin, str1);
    cout << "Enter string 2: ";
    getline(cin, str2);

    //concatenate str1 and str2
    str1 += str2;

    cout << "str1 is " << str1 << endl;

    


    return 0;
}