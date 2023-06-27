// 传递结构的地址
// 1、调用函数时，将结构的地址 (&pplace) 而不是结构本身 pplace)
// 2、传递给它将形参声明为指向polar的指针，即polar*类型，由于函数不应该修改结构，因此使用了const修饰:
// 3、由于形参是指针而不是结构，因此应使用间接成员运算符 (->)，而不是成员运算符(句点)。

#include <iostream>
#include <cmath>

struct polar
{
    double distance;
    double angle;
};

struct rect
{
    double x;
    double y;
};

void rect_to_polar(const rect *pxy, polar *pda);
void show_polar(const polar *pda);

int main(void)
{
    using namespace std;
    rect rplace;
    polar pplace;

    cout << "Enter the x and y values: ";
    while (cin >> rplace.x >> rplace.y)
    {
        rect_to_polar(&rplace, &pplace);
        show_polar(&pplace);
        cout << "Next two numbers (q to quit): ";
    }
    cout << "Done.\n";

    return 0;
}

void show_polar(const polar *pda)
{
    using namespace std;
    const double Rad_to_deg = 57.29577951;
    cout << "distance = " << pda->distance;
    cout << ", angle = " << pda->angle * Rad_to_deg;
    cout << " degrees\n";
}

void rect_to_polar(const rect *pxy, polar *pda)
{
    using namespace std;
    pda->distance = sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
    pda->angle = atan2(pxy->y, pxy->x);
}
