#include<string.h>

class Address {
    public:
        char city[10];
        char state[10];
        double pincode;

    Address(char city[10], char state[10], double pincode) {
        strcpy(this->city, city);
        strcpy(this->state, state);
        this->pincode = pincode;
    }
};