// 在for循环中使用数值测试
#include <iostream>
int main(void)
{
    using namespace std;
    cout << "Enter the starting countdowm value: " << endl;
    int limit;
    cin >> limit;
    int i;
    for (i = limit; i >= 0; i--)
        cout << "i = " << i << "\n";
    cout << "Done now that i = " << i << endl;

    return 0;
}