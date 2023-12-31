// 整数和浮点数除法
#include <iostream>

int main(void)
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);

    cout << "Integer divisoin: 9/5 = " << 9 / 5 << endl;
    cout << "Float-point division 9.0/5.0 = " << 9.0 / 5.0 << endl;
    cout << "Mixed division 9.0/5 = " << 9.0 / 5 << endl;
    cout << "double constants: 1e7/9.0 = " << 1e+7 / 9.0 << endl;
    cout << "float constants: 1e7f/9.0f = " << 1e+7f / 9.0f << endl;

    return 0;
}