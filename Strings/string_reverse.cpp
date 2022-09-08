#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1;
    int temp;

    cout << "Enter string 1: ";
    getline(cin, str1);
    
    //reverse str1

    for(int i = 0; i < str1.length()/2; i++)
    {
        temp = str1[i];
        str1[i] = str1[str1.length() - i - 1];
        str1[str1.length() - i - 1] = temp;
    }

    cout << "str1 is " << str1 << endl;

    return 0;
}