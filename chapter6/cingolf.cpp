// 重置 cin 以接受新的输入
// 删除错误输入
// 提示用户再输入
#include <iostream>
const int Max = 5;

int main(void)
{
    using namespace std;

    int golf[Max];
    cout << "Please enter your golf scores." << endl;
    cout << "You must enter " << Max << " rounds." << endl;

    int i = 0;
    for (i = 0; i < Max; i++)
    {
        cout << "round #" << i + 1 << ": ";
        while (!(cin >> golf[i]))
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Please enter a number: ";
        }
    }
    double total = 0.0;
    for (i = 0; i < Max; i++)
        total += golf[i];
    cout << total / Max << " = average score " << Max << " rounds\n";

    return 0;
}