#include<iostream>
#include<string.h>
// #include<string>
using namespace std;

int main()
{
    char s1[20] = "Hello";
    string str = "World";
    int count = 0, i;

    cout << s1 << endl;
    cout << "Length of s1 is " << strlen(s1) << endl;


    cout << str << endl;
    cout << "Length of str is " << str.length() << endl;


    for (i = 0; s1[i] != '\0'; i++)
    {
        count++;
        if(s1[i] == '\0')
            break;
    }
    

    cout << "Length of s1 is " << count << endl;

    return 0;
}