// 返回c风格字符串的函数
#include <iostream>
char *buildstr(char c, int n);

int main(void)
{
    using namespace std;
    int times;
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    cout << "Enter an integer: ";
    cin >> times;
    char *ps = buildstr(ch, times);
    cout << ps << endl;
    delete[] ps;
    ps = buildstr('+', 20);
    cout << ps << "-DONE-" << ps << endl;
    delete[] ps;

    return 0;
}

char *buildstr(char c, int n)
{
    char *pstr = new char[n + 1];
    pstr[n] = '\n';
    while (n-- > 0)
        pstr[n] = c;

    return pstr;
}