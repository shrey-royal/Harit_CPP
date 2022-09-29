/*
STL -> Standard Template Library 
Vector -> Dynamic Array
*/

#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> vec;    // Vector of int type
    int i;

    // for(i=0; i<10; i++){ 
    //     vec.push_back((i+1)*10);   // Pushing elements in vector
    // }

    vec.push_back(10);
    vec.push_back(28);

    cout << "\nSize of Vector is " << vec.size() << endl; // Size of vector

    for(i=0; i<vec.size(); i++){
        cout << vec[i] << " ";     // Printing elements of vector
    }
    cout << endl;

    return 0;
}