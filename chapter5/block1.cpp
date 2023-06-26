// 语句快中定义的变量
#include <iostream>

int main(void)
{
    using namespace std;
    int x = 20;
    {
        int y = 100;
        cout << x << endl;
        cout << y << endl;
    }

    cout << x << endl;
    cout << y << endl;

    return 0;
}

/*
由于定义的y在代码块
{
    int y = 100;
    cout << x << endl;
    cout << y << endl;
}
中， 所以在代码块执行完后变量y将会被释放，
那么在代码块之外的地方使用y时，代码编译将会出错。
*/