#include<iostream>
using namespace std;

int main()
{
    int *arr, n, i;

    // arr = new int[5];
    // arr = (int *)malloc(5 * sizeof(int));

    cout << "Size of int is: " << sizeof(int) << endl;
    cout << "Size of arr is: " << sizeof(arr) << endl;
    cout << "Enter the size of array: ";
    cin >> n;



    for(i=0; i<n; i++) {
        arr[i] = i*2;
    }

    cout << "Array elements are: ";
    for(i=0; i<n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nIndex 4: " << *(arr+4) << endl;


    return 0;
}