// 使用for循环处理字符串
#include <iostream>
#include <string>

int main(void)
{
    using namespace std;

    cout << "Enter a word: ";
    string word;
    cin >> word;
    for (int i = word.size() - 1; i >= 0; i--)
        cout << word[i];
    cout << endl
         << "Bye." << endl;

    return 0;
}