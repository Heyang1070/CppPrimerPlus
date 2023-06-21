// 使用转义序列
#include <iostream>

int main(void)
{
    using namespace std;
    long code;

    cout << "\aOperatio \"HyperHype\" is now activated!" << endl;
    cout << "Enter your agent code:_______\b\b\b\b\b\b\b";
    cin >> code;
    cout << "\aYou entered " << code << "..." << endl;
    cout << "\aCode verified! Proceed with Plan zZ!" << endl;

    return 0;
}