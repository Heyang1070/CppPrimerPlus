// 使用数组比较字符串
#include <iostream>
#include <string>

int main(void)
{
    using namespace std;
    string word = "?ate";

    for (char ch = 'a'; word != "mate"; ch++)
    {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop end, word is " << word << endl;

    return 0;
}