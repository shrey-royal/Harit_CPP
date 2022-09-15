#include<iostream>
#include<fstream>

using namespace std;

int main(){

    string str;

    ifstream in("file.txt");

    if(in.is_open()){
        while(getline(in, str)){
            cout<<str<<endl;
        }
    }

    in.close();

    return 0;
}