// 递加运算符
#include <iostream>

int main(void)
{
    using namespace std;
    int a = 20;
    int b = 20;

    cout << "a = " << a << ": b = " << b << endl;
    cout << "a++ = " << a++ << ": ++b = " << ++b << endl;
    cout << "a = " << a << ": b = " << b << endl;

    return 0;
}