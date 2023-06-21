// 初始化指针
#include <iostream>

int main(void)
{
    using namespace std;

    int higgens = 5;
    int *pt = &higgens;

    cout << "value of higgens = " << higgens
         << "; Address of higgens = " << &higgens << endl;

    cout << "value of *pt = " << *pt
         << "; value of pt = " << pt << endl;

    return 0;
}