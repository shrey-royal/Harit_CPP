#include<iostream>
using namespace std;

int main()
{
    //reverse number
    int n, rev=0, temp, remainder;

    cout << "Enter a number: ";
    cin >> n;

    temp = n;
    // rev = 0;
    for( ; temp!=0; ){
        remainder = temp%10;
        rev = (rev*10) + remainder;
        temp = temp/10;
    }

    cout << "Reverse of " << n << " is " << rev << endl;

    return 0;
}
