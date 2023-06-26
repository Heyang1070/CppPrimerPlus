// 反转数组
#include <iostream>
#include <string>

int main(void)
{
    using namespace std;
    cout << "Enter a word: ";
    string word;
    cin >> word;

    char temp;
    int i, j;

    for (j = 0, i = word.size(); j < i; --i, ++j)
    {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
    cout << word << endl
         << "Done" << endl;

    return 0;
}