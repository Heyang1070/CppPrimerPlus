// 字符串作为参数
#include <iostream>
unsigned int c_in_str(const char *str, char ch);

int main(void)
{
    using namespace std;
    char mmm[15] = "minimum";
    char const *wail = "ululate"; // "ululate" 是一个不变常量，需要const限定，char *wail = "ululate";编译可通过，但有警告

    unsigned int ms = c_in_str(mmm, 'm');
    unsigned int us = c_in_str(wail, 'u');
    cout << ms << " m characters in " << mmm << endl;
    cout << us << " u characters in " << wail << endl;

    return 0;
}

unsigned int c_in_str(const char *str, char ch)
{
    unsigned int count = 0;

    while (*str)
    {
        if (*str == ch)
            count++;
        str++;
    }
    return count;
}