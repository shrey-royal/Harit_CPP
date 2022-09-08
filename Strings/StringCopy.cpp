#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1;
    string str2;

    cout << "Enter string 1: ";
    getline(cin, str1);
    //copy str1 into str2
    str2 = str1;
    cout << "str1 is " << str1 << endl;
    cout << "str2 is " << str2 << endl;


    // for(int i = 0; i < str1.length(); i++)
    // {
    //     str2[i] = str1[i];
    // }

    return 0;
}