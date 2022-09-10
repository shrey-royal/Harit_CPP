#include<iostream>
#include<string.h>
using namespace std;

/*
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
*/

int main(){
    char str1[10], str2[10];

    cout << "Enter string 1: ";
    gets(str1);

    cout << "Enter string 2: ";
    gets(str2);

    //concatenate str1 and str2
    // strcat(str1, str2);

    for(int i = 0; i < strlen(str2); i++){
        str1[strlen(str1) + i] = str2[i];
    }

    cout << "str1 is " << str1 << endl;

    return 0;
}