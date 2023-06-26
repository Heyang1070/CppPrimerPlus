// 使用while循环读取字符
#include <iostream>

int main(void)
{
    using namespace std;
    char ch;
    int count = 0;
    cout << "Enter characters; enter 3 to quit:" << endl;
    cin >> ch;

    while (ch != '#')
    {
        cout << ch;
        ++count;
        cin >> ch;
    }

    cout << endl
         << count << " characters read" << endl;

    return 0;
}