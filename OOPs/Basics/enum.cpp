#include<iostream>
using namespace std;

enum day {
    SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
};

int main(){
    // day d = WEDNESDAY;
    day d;

    cout << "Day: " << d << endl;

    return 0;
}
//scope resolution operator ::

/*
Advantages :- 
1. it Improves type safety
2. enum can be used as a switch statement
3. enum can be used as array index

*/