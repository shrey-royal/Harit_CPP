#include<iostream>
using namespace std;

int main(){
    //print the series like 1 - 3 + 5 - 7 + 9 . . . n

    int n, sum = 0, i, flag = 1;

    cout << "Enter the n: ";
    cin >> n;

    for(i=1; i<=n; i+=2){
        if(flag == 1){
            sum += i;
            flag = 0;
        }
        else{
            sum -= i;
            flag = 1;
        }
    }

    cout << "The sum is: " << sum << endl;
    return 0;
}