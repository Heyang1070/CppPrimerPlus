// 读取字符直到文件末尾
#include <iostream>

int main(void)
{
    using namespace std;
    char ch;
    int count = 0;

    cin.get(ch);
    while (cin.fail() == false)
    {
        cout << ch;
        ++count;
        cin.get(ch);
    }
    cout << endl
         << count << " characters read" << endl;

    return 0;
}