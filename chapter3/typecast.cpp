//强制类型转换
#include <iostream>

int main(void)
{
    using namespace std;
    int auks, bats, coots;
    char ch = 'Z';

    auks = 19.99 + 11.99;

    bats = (int)19.99 + (int)11.99;
    coots = int(19.99) + int(11.99);
    cout << "auks = " << auks << ", bats = " << bats;
    cout << ", coots = " << coots << endl;

    cout << "The code for " << ch << " is ";
    cout << int(ch) << endl;
    cout << "Yes, the code is ";
    cout << static_cast<int>(ch) << endl;

    return 0;
}