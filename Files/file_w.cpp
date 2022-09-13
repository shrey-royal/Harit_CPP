//writing into a file

#include<iostream>
#include<fstream>   //fstream = ifstream + ofstream
using namespace std;

int main() {
    
    ofstream fout;

    // fout.open("file.txt", ios::out);    //ios::out = write mode
    fout.open("file.txt");

    if(fout.fail()) {
        cout << "Error in opening file" << endl;
        exit(1);
    } else if(fout.is_open()) {
        cout << "File opened successfully" << endl;

        fout << "Hello World" << endl;
        fout.close();
    } else{
        cout << "Something went wrong..." << endl;
    }
    


    return 0;
}