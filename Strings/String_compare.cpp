#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

int main()
{
    char str1[10], str2[10];
    int i, max_limit, flag = 0;

    cout << "Enter string 1: ";
    gets(str1);
    cout << "Enter string 2: ";
    gets(str2);

    max_limit = max(strlen(str1), strlen(str2));

    for(i=0; i<max_limit; i++){
        if(str1[i] != str2[i]){
            flag = 1;
            break;
        }
    }

    if (flag){
        cout << "Strings are not equal" << endl;
    }else{
        cout << "Strings are equal" << endl;
    }
    


    return 0;
}