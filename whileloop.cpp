#include<iostream>
using namespace std;

int main()
{
    int pin;
    cout << "Enter PIN: ";
    cin>> pin;
    while(pin != 9999){
        cout << " Incorrect Pin, Please try again: ";
        cin>> pin;
    }

    return 0;
}