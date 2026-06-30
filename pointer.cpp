#include<iostream>
using namespace std;

int main(){
    // int a = 10;
    // int *p = &a;
    // cout <<a << endl;
    // cout <<&a << endl;
    // cout << p << endl;
    // cout << *p << endl;

    int x = 15;
    int *p=&x;
    *p=*p+1;
    cout<<x<<endl;


    return 0;
}