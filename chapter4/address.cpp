// 使用 & 来获取地址

#include <iostream>

int main(void)
{
    using namespace std;

    int donuts = 6;
    double cups = 4.5;

    cout << "donuts value = " << donuts;
    cout << " and donuts address = " << &donuts << endl;

    cout << "cups value = " << cups;
    cout << " and cups address = " << &cups << endl;

    return 0;
}