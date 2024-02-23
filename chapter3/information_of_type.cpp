#include <iostream>
#include <climits>

int main(void)
{
    using namespace std;

    cout << "char 类型占 " << sizeof(char) << " 字节;" << endl;
    cout << "char 是: " << CHAR_BIT << "位; 最小值是: " << CHAR_MIN << "; 最大值是：" << CHAR_MAX << endl;
    cout << "short 类型占 " << sizeof(short) << " 字节;" << endl;
    cout << "int 类型占 " << sizeof(int) << " 字节;" << endl;
    cout << "long 类型占 " << sizeof(long) << " 字节;" << endl;
    cout << "long long 类型占 " << sizeof(long long) << " 字节;" << endl;

    cout << endl
         << endl;

    cout << "float 类型占: " << sizeof(float) << " 字节;" << endl;
    cout << "double 类型占: " << sizeof(double) << " 字节;" << endl;
    cout << "long doublle 类型占: " << sizeof(long double) << " 字节。" << endl;

    return 0;
}