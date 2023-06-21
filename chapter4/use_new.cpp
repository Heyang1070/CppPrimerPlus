// 使用 new 操作
#include <iostream>

int main(void)
{
    using namespace std;

    int nights = 1001;
    int *pt = new int;
    double *pd = new double;
    *pt = 1001;
    *pd = 10000001.0;

    cout << "nights value = ";
    cout << nights << ": location " << &nights << endl;
    cout << "int ";
    cout << "value = " << *pt << ": location = " << pt << endl;

    cout << "double ";
    cout << "value = " << *pd << ": location = " << pd << endl;
    cout << "location of pointer pd: " << &pd << endl;
    cout << "size of pt = " << sizeof(pt);
    cout << ": size of *pt = " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof(pd);
    cout << ": size of *pd = " << sizeof(*pd) << endl;

    return 0;
}