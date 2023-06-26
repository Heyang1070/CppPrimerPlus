// 块内部定义外部已经定义过的变量
#include <iostream>

int main(void)
{
    using std::cout;
    using std::endl;

    int x = 20;
    {
        cout << x << endl;
        int x = 100;
        cout << x << endl;
    }

    cout << x << endl;

    return 0;
}

/*
代码块中的变量如果和外部变量同名，
那么在代码块中，该变量会暂时覆盖外部变量；
当代码块执行结束后，会释放该变量，同时该
变量的值变为外部定义的。
*/