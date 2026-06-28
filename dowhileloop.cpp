#include<iostream>
using namespace std;

int main(){
    int password;
    int CorrectPassword = 1234;
    do{
        cout << "Enter Password:";
        cin>>password;
    }while(password != CorrectPassword);
    
    return 0;
}