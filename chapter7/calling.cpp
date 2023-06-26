// 定义，原型设计，调用函数
#include <iostream>

void simple(void);

int main(void)
{
    using namespace std;
    cout << "main() will call the simple() function:\n";
    simple();
    cout << "main() is finished with the simple() function.\n";

    return 0;
}

void simple(void)
{
    using namespace std;
    cout << "I'm but a simple function.\n";
}