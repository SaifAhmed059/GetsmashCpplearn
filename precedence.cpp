#include<iostream>
using namespace std;

// int main()
// {
//     int a =4;
//     int b = a++ + ++a * 2;

//     cout << b;

//     return 0;
// }

int main()
{
    int a = 1;
    int b = a++ + a++ + --a;

    cout << b;

    return 0;
}