// 指针，数组和指针算术
#include <iostream>

int main(void)
{
    using namespace std;

    double wages[3] = {10000.0,
                       20000.0,
                       30000.0};
    short stacks[3] = {3, 2, 1};
    double *pw = wages;
    short *ps = &stacks[0];

    cout << "pw = " << pw << " and *pw = " << *pw << endl;
    pw = pw + 1;
    cout << "Add 1 to pw pointer:" << endl;
    cout << "pw = " << pw << " and *pw = " << *pw << endl
         << endl;

    cout << "ps = " << ps << " and *ps = " << *ps << endl;
    ps = ps + 1;
    cout << "Add 1 to ps pointer:" << endl;
    cout << "ps = " << ps << " and *ps = " << *ps << endl
         << endl;

    cout << "access two element with array notatiom" << endl;
    cout << "stacks[0] = " << stacks[0] << ", stacks[1] = "
         << stacks[1] << endl;
    cout << "access two elements with pointer notation" << endl;
    cout << "*stacks = " << *stacks << ", *(stacks + 1) = " << *(stacks + 1)
         << endl;

    cout << sizeof(wages) << " = size of wages array" << endl;
    cout << sizeof(pw) << " = size of pw pointer" << endl;

    return 0;
}